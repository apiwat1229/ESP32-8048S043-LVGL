#include <lvgl.h>
#include <Arduino_GFX_Library.h>
#include "ui.h"

#define TFT_BL 2
#define GFX_BL DF_GFX_BL  // default backlight pin, you may replace DF_GFX_BL to actual backlight pin
/* More dev device declaration: https://github.com/moononournation/Arduino_GFX/wiki/Dev-Device-Declaration */
#if defined(DISPLAY_DEV_KIT)
Arduino_GFX *gfx = create_default_Arduino_GFX();
#else  /* !defined(DISPLAY_DEV_KIT) */

Arduino_ESP32RGBPanel *bus = new Arduino_ESP32RGBPanel(
  GFX_NOT_DEFINED /* CS */, GFX_NOT_DEFINED /* SCK */, GFX_NOT_DEFINED /* SDA */,
  40 /* DE */, 41 /* VSYNC */, 39 /* HSYNC */, 42 /* PCLK */,
  45 /* R0 */, 48 /* R1 */, 47 /* R2 */, 21 /* R3 */, 14 /* R4 */,
  5 /* G0 */, 6 /* G1 */, 7 /* G2 */, 15 /* G3 */, 16 /* G4 */, 4 /* G5 */,
  8 /* B0 */, 3 /* B1 */, 46 /* B2 */, 9 /* B3 */, 1 /* B4 */
);
Arduino_RPi_DPI_RGBPanel *gfx = new Arduino_RPi_DPI_RGBPanel(
  bus,
  800 /* width */, 0 /* hsync_polarity */, 8 /* hsync_front_porch */, 4 /* hsync_pulse_width */, 8 /* hsync_back_porch */,
  480 /* height */, 0 /* vsync_polarity */, 8 /* vsync_front_porch */, 4 /* vsync_pulse_width */, 8 /* vsync_back_porch */,
  1 /* pclk_active_neg */, 14000000 /* prefer_speed */, true /* auto_flush */);
#endif /* !defined(DISPLAY_DEV_KIT) */

#include "touch.h"

static uint32_t screenWidth;
static uint32_t screenHeight;
static lv_disp_draw_buf_t draw_buf;
static lv_color_t *disp_draw_buf;
static lv_disp_drv_t disp_drv;

unsigned long previousMillis = 0;
const long interval = 2000;

/* Display flushing */
void my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p) {
  uint32_t w = (area->x2 - area->x1 + 1);
  uint32_t h = (area->y2 - area->y1 + 1);

#if (LV_COLOR_16_SWAP != 0)
  gfx->draw16bitBeRGBBitmap(area->x1, area->y1, (uint16_t *)&color_p->full, w, h);
#else
  gfx->draw16bitRGBBitmap(area->x1, area->y1, (uint16_t *)&color_p->full, w, h);
#endif

  lv_disp_flush_ready(disp);
}

void my_touchpad_read(lv_indev_drv_t *indev_driver, lv_indev_data_t *data) {
  if (touch_has_signal()) {
    if (touch_touched()) {
      data->state = LV_INDEV_STATE_PR;

      /*Set the coordinates*/
      data->point.x = touch_last_x;
      data->point.y = touch_last_y;
    } else if (touch_released()) {
      data->state = LV_INDEV_STATE_REL;
    }
  } else {
    data->state = LV_INDEV_STATE_REL;
  }
}
HardwareSerial Receiver(0);

#define Receiver_Txd_pin 17
#define Receiver_Rxd_pin 18

float temperatureData, batteryData;
int moistureData, fertilityData, lightData;

String getValue(String data, char separator, int index) {
  int found = 0;
  int strIndex[] = { 0, -1 };
  int maxIndex = data.length() - 1;

  for (int i = 0; i <= maxIndex && found <= index; i++) {
    if (data.charAt(i) == separator || i == maxIndex) {
      found++;
      strIndex[0] = strIndex[1] + 1;
      strIndex[1] = (i == maxIndex) ? i + 1 : i;
    }
  }

  return found > index ? data.substring(strIndex[0], strIndex[1]) : "";
}


void setup() {
  //Serial.begin(Baud Rate, Data Protocol, Txd pin, Rxd pin);
  Serial.begin(115200);                                                    // Define and start serial monitor
  Receiver.begin(115200, SERIAL_8N1, Receiver_Txd_pin, Receiver_Rxd_pin);  // Define and start Receiver serial port

  gfx->begin();
#ifdef TFT_BL
  pinMode(TFT_BL, OUTPUT);
  digitalWrite(TFT_BL, HIGH);
#endif
  lv_init();
  delay(10);
  touch_init();
  screenWidth = gfx->width();
  screenHeight = gfx->height();
#ifdef ESP32
  disp_draw_buf = (lv_color_t *)heap_caps_malloc(sizeof(lv_color_t) * screenWidth * screenHeight / 4, MALLOC_CAP_INTERNAL | MALLOC_CAP_8BIT);
#else
  disp_draw_buf = (lv_color_t *)malloc(sizeof(lv_color_t) * screenWidth * screenHeight / 4);
#endif
  if (!disp_draw_buf) {
    Serial.println("LVGL disp_draw_buf allocate failed!");
  } else {
    lv_disp_draw_buf_init(&draw_buf, disp_draw_buf, NULL, screenWidth * screenHeight / 4);

    /* Initialize the display */
    lv_disp_drv_init(&disp_drv);
    /* Change the following line to your display resolution */
    disp_drv.hor_res = screenWidth;
    disp_drv.ver_res = screenHeight;
    disp_drv.flush_cb = my_disp_flush;
    disp_drv.draw_buf = &draw_buf;
    lv_disp_drv_register(&disp_drv);

    /* Initialize the (dummy) input device driver */
    static lv_indev_drv_t indev_drv;
    lv_indev_drv_init(&indev_drv);
    indev_drv.type = LV_INDEV_TYPE_POINTER;
    indev_drv.read_cb = my_touchpad_read;
    lv_indev_drv_register(&indev_drv);

    Serial.println("Setup done");
    ui_init();
  }

  void loop() {
    lv_timer_handler(); /* let the GUI do its work */
    delay(5);
  }

  void serialEvent() {
    if (Receiver.available()) {  // Wait for the Receiver to get the characters
                                 //   float received_temperature = Receiver.parseFloat();  // Display the Receivers characters
      // Serial.println(received_temperature);                // Display the result on the serial monitor
      String incoming = "";
      while (Receiver.available()) {
        incoming += (char)Receiver.read();
      }
      temperatureData = getValue(incoming, ';', 1).toFloat();
      moistureData = getValue(incoming, ';', 2).toInt();
      fertilityData = getValue(incoming, ';', 3).toInt();
      lightData = getValue(incoming, ';', 4).toInt();
      batteryData = getValue(incoming, ';', 5).toFloat();

      Serial.print("temperature : ");
      Serial.print(temperatureData);
      Serial.println("°C ");
      Serial.print("fertility : ");
      Serial.print(fertilityData);
      Serial.println(" us/cm ");
      Serial.print("moisture : ");
      Serial.print(moistureData);
      Serial.println(" %H ");
      Serial.print("light : ");
      Serial.print(lightData);
      Serial.println(" lux ");
      Serial.print("battery : ");
      Serial.print(batteryData);
      Serial.println(" Volt ");
      Serial.println("recieve data from sensor success\n");
      // Serial.println(incoming);  // Display the result on the serial monitor
    };
  }