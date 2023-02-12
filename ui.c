// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.1
// LVGL VERSION: 8.2.0
// PROJECT: SmartFarmDashboard

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
void ui_event_Screen1(lv_event_t * e);
lv_obj_t * ui_Screen1;
lv_obj_t * ui_AppBar;
lv_obj_t * ui_Time;
lv_obj_t * ui_Screen1_Title;
lv_obj_t * ui_Wifi_Signel;
lv_obj_t * ui_RoomTemp_Group;
lv_obj_t * ui_RoomTempTitle;
lv_obj_t * ui_RoomTempData;
lv_obj_t * ui_Label2;
lv_obj_t * ui_SunLight_Group;
lv_obj_t * ui_SunLightTitle;
lv_obj_t * ui_SunLightData;
lv_obj_t * ui_Label6;
lv_obj_t * ui_Soil_Moisture_Group;
lv_obj_t * ui_MoistureTitle;
lv_obj_t * ui_MoistureData;
lv_obj_t * ui_Label4;
lv_obj_t * ui_Soil_TempGroup;
lv_obj_t * ui_HumidTitle1;
lv_obj_t * ui_SoilTemp;
lv_obj_t * ui_Label1;
lv_obj_t * ui_RoomHumid_Group;
lv_obj_t * ui_Label3;
lv_obj_t * ui_RoomHumidTitle;
lv_obj_t * ui_RoomHumidData;
lv_obj_t * ui_fertility_Group;
lv_obj_t * ui_FertilityTitla;
lv_obj_t * ui_FertilityData;
lv_obj_t * ui_Label5;
void ui_event_Screen2(lv_event_t * e);
lv_obj_t * ui_Screen2;
void ui_event_WateringIcon(lv_event_t * e);
lv_obj_t * ui_WateringIcon;
lv_obj_t * ui_LightStatTitle1;
lv_obj_t * ui_Stat2;
lv_obj_t * ui_WateringIMG;
void ui_event_LightIcon(lv_event_t * e);
lv_obj_t * ui_LightIcon;
lv_obj_t * ui_LightStatTitle;
lv_obj_t * ui_Stat1;
lv_obj_t * ui_LightIMG;
void ui_event_FanIcon(lv_event_t * e);
lv_obj_t * ui_FanIcon;
lv_obj_t * ui_Stat;
lv_obj_t * ui_FanIMG;
lv_obj_t * ui_FanStatTitle;
lv_obj_t * ui_AppBar1;
lv_obj_t * ui_Time1;
lv_obj_t * ui_Screen2_Title;
lv_obj_t * ui_Wifi_Signel1;
lv_obj_t * ui_Button2;
lv_obj_t * ui_FanStatTitle1;
lv_obj_t * ui_FanIMG1;
lv_obj_t * ui_Stat3;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_Screen1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT) {
        _ui_screen_change(ui_Screen2, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 0);
    }
}
void ui_event_Screen2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT) {
        _ui_screen_change(ui_Screen1, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 500, 0);
    }
}
void ui_event_WateringIcon(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        (e);
    }
}
void ui_event_LightIcon(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        (e);
    }
}
void ui_event_FanIcon(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        (e);
    }
}

///////////////////// SCREENS ////////////////////
void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_AppBar = lv_obj_create(ui_Screen1);
    lv_obj_set_height(ui_AppBar, 50);
    lv_obj_set_width(ui_AppBar, lv_pct(98));
    lv_obj_set_x(ui_AppBar, 0);
    lv_obj_set_y(ui_AppBar, 8);
    lv_obj_set_align(ui_AppBar, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_AppBar, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Time = lv_label_create(ui_AppBar);
    lv_obj_set_width(ui_Time, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Time, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Time, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_Time, "20 : 21");
    lv_obj_set_style_text_font(ui_Time, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_Title = lv_label_create(ui_AppBar);
    lv_obj_set_width(ui_Screen1_Title, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen1_Title, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Screen1_Title, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen1_Title, "Sensor Monitor");
    lv_obj_set_style_text_font(ui_Screen1_Title, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Wifi_Signel = lv_label_create(ui_AppBar);
    lv_obj_set_width(ui_Wifi_Signel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Wifi_Signel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Wifi_Signel, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_Wifi_Signel, "WiFi 90%");
    lv_obj_set_style_text_font(ui_Wifi_Signel, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_RoomTemp_Group = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_RoomTemp_Group, 229);
    lv_obj_set_height(ui_RoomTemp_Group, 120);
    lv_obj_set_x(ui_RoomTemp_Group, 30);
    lv_obj_set_y(ui_RoomTemp_Group, 80);
    lv_obj_clear_flag(ui_RoomTemp_Group, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_RoomTempTitle = lv_label_create(ui_RoomTemp_Group);
    lv_obj_set_width(ui_RoomTempTitle, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_RoomTempTitle, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_RoomTempTitle, 0);
    lv_obj_set_y(ui_RoomTempTitle, -10);
    lv_obj_set_align(ui_RoomTempTitle, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_RoomTempTitle, "Room Temp");
    lv_obj_set_style_text_font(ui_RoomTempTitle, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_RoomTempData = lv_label_create(ui_RoomTemp_Group);
    lv_obj_set_width(ui_RoomTempData, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_RoomTempData, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_RoomTempData, 0);
    lv_obj_set_y(ui_RoomTempData, 20);
    lv_obj_set_align(ui_RoomTempData, LV_ALIGN_CENTER);
    lv_label_set_text(ui_RoomTempData, "30.2");
    lv_obj_set_style_text_font(ui_RoomTempData, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label2 = lv_label_create(ui_RoomTemp_Group);
    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label2, LV_ALIGN_BOTTOM_RIGHT);
    lv_label_set_text(ui_Label2, " °C");
    lv_obj_set_style_text_font(ui_Label2, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SunLight_Group = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_SunLight_Group, 229);
    lv_obj_set_height(ui_SunLight_Group, 120);
    lv_obj_set_x(ui_SunLight_Group, 0);
    lv_obj_set_y(ui_SunLight_Group, 40);
    lv_obj_set_align(ui_SunLight_Group, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_SunLight_Group, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_SunLightTitle = lv_label_create(ui_SunLight_Group);
    lv_obj_set_width(ui_SunLightTitle, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SunLightTitle, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_SunLightTitle, 0);
    lv_obj_set_y(ui_SunLightTitle, -10);
    lv_obj_set_align(ui_SunLightTitle, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_SunLightTitle, "SunLight");
    lv_obj_set_style_text_font(ui_SunLightTitle, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SunLightData = lv_label_create(ui_SunLight_Group);
    lv_obj_set_width(ui_SunLightData, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SunLightData, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_SunLightData, 0);
    lv_obj_set_y(ui_SunLightData, 20);
    lv_obj_set_align(ui_SunLightData, LV_ALIGN_CENTER);
    lv_label_set_text(ui_SunLightData, "1000");
    lv_obj_set_style_text_font(ui_SunLightData, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label6 = lv_label_create(ui_SunLight_Group);
    lv_obj_set_width(ui_Label6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label6, LV_ALIGN_BOTTOM_RIGHT);
    lv_label_set_text(ui_Label6, "lux");
    lv_obj_set_style_text_font(ui_Label6, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Soil_Moisture_Group = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Soil_Moisture_Group, 229);
    lv_obj_set_height(ui_Soil_Moisture_Group, 120);
    lv_obj_set_x(ui_Soil_Moisture_Group, 0);
    lv_obj_set_y(ui_Soil_Moisture_Group, 80);
    lv_obj_set_align(ui_Soil_Moisture_Group, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Soil_Moisture_Group, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_MoistureTitle = lv_label_create(ui_Soil_Moisture_Group);
    lv_obj_set_width(ui_MoistureTitle, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MoistureTitle, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_MoistureTitle, 0);
    lv_obj_set_y(ui_MoistureTitle, -10);
    lv_obj_set_align(ui_MoistureTitle, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_MoistureTitle, "Soil Moisture");
    lv_obj_set_style_text_font(ui_MoistureTitle, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MoistureData = lv_label_create(ui_Soil_Moisture_Group);
    lv_obj_set_width(ui_MoistureData, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MoistureData, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_MoistureData, 0);
    lv_obj_set_y(ui_MoistureData, 20);
    lv_obj_set_align(ui_MoistureData, LV_ALIGN_CENTER);
    lv_label_set_text(ui_MoistureData, "80");
    lv_obj_set_style_text_font(ui_MoistureData, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label4 = lv_label_create(ui_Soil_Moisture_Group);
    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label4, LV_ALIGN_BOTTOM_RIGHT);
    lv_label_set_text(ui_Label4, "%");
    lv_obj_set_style_text_font(ui_Label4, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Soil_TempGroup = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Soil_TempGroup, 229);
    lv_obj_set_height(ui_Soil_TempGroup, 120);
    lv_obj_set_x(ui_Soil_TempGroup, -30);
    lv_obj_set_y(ui_Soil_TempGroup, 80);
    lv_obj_set_align(ui_Soil_TempGroup, LV_ALIGN_TOP_RIGHT);
    lv_obj_clear_flag(ui_Soil_TempGroup, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_HumidTitle1 = lv_label_create(ui_Soil_TempGroup);
    lv_obj_set_width(ui_HumidTitle1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_HumidTitle1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_HumidTitle1, 0);
    lv_obj_set_y(ui_HumidTitle1, -10);
    lv_obj_set_align(ui_HumidTitle1, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_HumidTitle1, "Soil Temp");
    lv_obj_set_style_text_font(ui_HumidTitle1, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SoilTemp = lv_label_create(ui_Soil_TempGroup);
    lv_obj_set_width(ui_SoilTemp, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SoilTemp, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_SoilTemp, 0);
    lv_obj_set_y(ui_SoilTemp, 20);
    lv_obj_set_align(ui_SoilTemp, LV_ALIGN_CENTER);
    lv_label_set_text(ui_SoilTemp, "34.55");
    lv_obj_set_style_text_font(ui_SoilTemp, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label1 = lv_label_create(ui_Soil_TempGroup);
    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label1, LV_ALIGN_BOTTOM_RIGHT);
    lv_label_set_text(ui_Label1, " °C");
    lv_obj_set_style_text_font(ui_Label1, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_RoomHumid_Group = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_RoomHumid_Group, 229);
    lv_obj_set_height(ui_RoomHumid_Group, 120);
    lv_obj_set_x(ui_RoomHumid_Group, 30);
    lv_obj_set_y(ui_RoomHumid_Group, 40);
    lv_obj_set_align(ui_RoomHumid_Group, LV_ALIGN_LEFT_MID);
    lv_obj_clear_flag(ui_RoomHumid_Group, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label3 = lv_label_create(ui_RoomHumid_Group);
    lv_obj_set_width(ui_Label3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label3, LV_ALIGN_BOTTOM_RIGHT);
    lv_label_set_text(ui_Label3, "%");
    lv_obj_set_style_text_font(ui_Label3, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_RoomHumidTitle = lv_label_create(ui_RoomHumid_Group);
    lv_obj_set_width(ui_RoomHumidTitle, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_RoomHumidTitle, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_RoomHumidTitle, 0);
    lv_obj_set_y(ui_RoomHumidTitle, -10);
    lv_obj_set_align(ui_RoomHumidTitle, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_RoomHumidTitle, "Room Humid");
    lv_obj_set_style_text_font(ui_RoomHumidTitle, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_RoomHumidData = lv_label_create(ui_RoomHumid_Group);
    lv_obj_set_width(ui_RoomHumidData, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_RoomHumidData, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_RoomHumidData, 0);
    lv_obj_set_y(ui_RoomHumidData, 20);
    lv_obj_set_align(ui_RoomHumidData, LV_ALIGN_CENTER);
    lv_label_set_text(ui_RoomHumidData, "78");
    lv_obj_set_style_text_font(ui_RoomHumidData, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_fertility_Group = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_fertility_Group, 229);
    lv_obj_set_height(ui_fertility_Group, 120);
    lv_obj_set_x(ui_fertility_Group, -30);
    lv_obj_set_y(ui_fertility_Group, 40);
    lv_obj_set_align(ui_fertility_Group, LV_ALIGN_RIGHT_MID);
    lv_obj_clear_flag(ui_fertility_Group, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_FertilityTitla = lv_label_create(ui_fertility_Group);
    lv_obj_set_width(ui_FertilityTitla, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_FertilityTitla, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_FertilityTitla, 0);
    lv_obj_set_y(ui_FertilityTitla, -10);
    lv_obj_set_align(ui_FertilityTitla, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_FertilityTitla, "Fertility");
    lv_obj_set_style_text_font(ui_FertilityTitla, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_FertilityData = lv_label_create(ui_fertility_Group);
    lv_obj_set_width(ui_FertilityData, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_FertilityData, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_FertilityData, 0);
    lv_obj_set_y(ui_FertilityData, 20);
    lv_obj_set_align(ui_FertilityData, LV_ALIGN_CENTER);
    lv_label_set_text(ui_FertilityData, "78");
    lv_obj_set_style_text_font(ui_FertilityData, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label5 = lv_label_create(ui_fertility_Group);
    lv_obj_set_width(ui_Label5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label5, 10);
    lv_obj_set_y(ui_Label5, 0);
    lv_obj_set_align(ui_Label5, LV_ALIGN_BOTTOM_RIGHT);
    lv_label_set_text(ui_Label5, "us/cm");
    lv_obj_set_style_text_font(ui_Label5, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Screen1, ui_event_Screen1, LV_EVENT_ALL, NULL);

}
void ui_Screen2_screen_init(void)
{
    ui_Screen2 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WateringIcon = lv_obj_create(ui_Screen2);
    lv_obj_set_width(ui_WateringIcon, 229);
    lv_obj_set_height(ui_WateringIcon, 95);
    lv_obj_set_x(ui_WateringIcon, -30);
    lv_obj_set_y(ui_WateringIcon, 80);
    lv_obj_set_align(ui_WateringIcon, LV_ALIGN_TOP_RIGHT);
    lv_obj_clear_flag(ui_WateringIcon, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_LightStatTitle1 = lv_label_create(ui_WateringIcon);
    lv_obj_set_width(ui_LightStatTitle1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LightStatTitle1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LightStatTitle1, 10);
    lv_obj_set_y(ui_LightStatTitle1, -15);
    lv_obj_set_align(ui_LightStatTitle1, LV_ALIGN_TOP_RIGHT);
    lv_label_set_text(ui_LightStatTitle1, "Watering");
    lv_obj_set_style_text_font(ui_LightStatTitle1, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Stat2 = lv_label_create(ui_WateringIcon);
    lv_obj_set_width(ui_Stat2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Stat2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Stat2, 10);
    lv_obj_set_y(ui_Stat2, 15);
    lv_obj_set_align(ui_Stat2, LV_ALIGN_BOTTOM_RIGHT);
    lv_label_set_text(ui_Stat2, "ON");
    lv_obj_set_style_text_color(ui_Stat2, lv_color_hex(0x11B910), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Stat2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Stat2, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WateringIMG = lv_img_create(ui_WateringIcon);
    lv_img_set_src(ui_WateringIMG, &ui_img_watering2_png);
    lv_obj_set_width(ui_WateringIMG, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WateringIMG, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_WateringIMG, -10);
    lv_obj_set_y(ui_WateringIMG, 0);
    lv_obj_set_align(ui_WateringIMG, LV_ALIGN_LEFT_MID);
    lv_obj_add_flag(ui_WateringIMG, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_WateringIMG, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_LightIcon = lv_obj_create(ui_Screen2);
    lv_obj_set_width(ui_LightIcon, 229);
    lv_obj_set_height(ui_LightIcon, 95);
    lv_obj_set_x(ui_LightIcon, 0);
    lv_obj_set_y(ui_LightIcon, 80);
    lv_obj_set_align(ui_LightIcon, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_LightIcon, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_LightStatTitle = lv_label_create(ui_LightIcon);
    lv_obj_set_width(ui_LightStatTitle, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LightStatTitle, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LightStatTitle, 10);
    lv_obj_set_y(ui_LightStatTitle, -15);
    lv_obj_set_align(ui_LightStatTitle, LV_ALIGN_TOP_RIGHT);
    lv_label_set_text(ui_LightStatTitle, "Light");
    lv_obj_set_style_text_font(ui_LightStatTitle, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Stat1 = lv_label_create(ui_LightIcon);
    lv_obj_set_width(ui_Stat1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Stat1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Stat1, 10);
    lv_obj_set_y(ui_Stat1, 15);
    lv_obj_set_align(ui_Stat1, LV_ALIGN_BOTTOM_RIGHT);
    lv_label_set_text(ui_Stat1, "ON");
    lv_obj_set_style_text_color(ui_Stat1, lv_color_hex(0x11B910), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Stat1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Stat1, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LightIMG = lv_img_create(ui_LightIcon);
    lv_img_set_src(ui_LightIMG, &ui_img_lighting_png);
    lv_obj_set_width(ui_LightIMG, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LightIMG, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LightIMG, -10);
    lv_obj_set_y(ui_LightIMG, 0);
    lv_obj_set_align(ui_LightIMG, LV_ALIGN_LEFT_MID);
    lv_obj_add_flag(ui_LightIMG, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_LightIMG, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_FanIcon = lv_obj_create(ui_Screen2);
    lv_obj_set_width(ui_FanIcon, 229);
    lv_obj_set_height(ui_FanIcon, 95);
    lv_obj_set_x(ui_FanIcon, 30);
    lv_obj_set_y(ui_FanIcon, 80);
    lv_obj_clear_flag(ui_FanIcon, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Stat = lv_label_create(ui_FanIcon);
    lv_obj_set_width(ui_Stat, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Stat, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Stat, 10);
    lv_obj_set_y(ui_Stat, 15);
    lv_obj_set_align(ui_Stat, LV_ALIGN_BOTTOM_RIGHT);
    lv_label_set_text(ui_Stat, "OFF");
    lv_obj_set_style_text_color(ui_Stat, lv_color_hex(0xE70303), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Stat, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Stat, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_FanIMG = lv_img_create(ui_FanIcon);
    lv_img_set_src(ui_FanIMG, &ui_img_974855107);
    lv_obj_set_width(ui_FanIMG, LV_SIZE_CONTENT);   /// 75
    lv_obj_set_height(ui_FanIMG, LV_SIZE_CONTENT);    /// 75
    lv_obj_set_x(ui_FanIMG, -10);
    lv_obj_set_y(ui_FanIMG, 0);
    lv_obj_set_align(ui_FanIMG, LV_ALIGN_LEFT_MID);
    lv_obj_add_flag(ui_FanIMG, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_FanIMG, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_FanStatTitle = lv_label_create(ui_FanIcon);
    lv_obj_set_width(ui_FanStatTitle, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_FanStatTitle, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_FanStatTitle, 10);
    lv_obj_set_y(ui_FanStatTitle, -15);
    lv_obj_set_align(ui_FanStatTitle, LV_ALIGN_TOP_RIGHT);
    lv_label_set_text(ui_FanStatTitle, "Fan");
    lv_obj_set_style_text_font(ui_FanStatTitle, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_AppBar1 = lv_obj_create(ui_Screen2);
    lv_obj_set_height(ui_AppBar1, 50);
    lv_obj_set_width(ui_AppBar1, lv_pct(98));
    lv_obj_set_x(ui_AppBar1, 0);
    lv_obj_set_y(ui_AppBar1, 8);
    lv_obj_set_align(ui_AppBar1, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_AppBar1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Time1 = lv_label_create(ui_AppBar1);
    lv_obj_set_width(ui_Time1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Time1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Time1, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_Time1, "20 : 21");
    lv_obj_set_style_text_font(ui_Time1, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen2_Title = lv_label_create(ui_AppBar1);
    lv_obj_set_width(ui_Screen2_Title, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen2_Title, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Screen2_Title, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen2_Title, "Device Status");
    lv_obj_set_style_text_font(ui_Screen2_Title, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Wifi_Signel1 = lv_label_create(ui_AppBar1);
    lv_obj_set_width(ui_Wifi_Signel1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Wifi_Signel1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Wifi_Signel1, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_Wifi_Signel1, "WiFi 90%");
    lv_obj_set_style_text_font(ui_Wifi_Signel1, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button2 = lv_btn_create(ui_Screen2);
    lv_obj_set_width(ui_Button2, 229);
    lv_obj_set_height(ui_Button2, 95);
    lv_obj_set_align(ui_Button2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_FanStatTitle1 = lv_label_create(ui_Button2);
    lv_obj_set_width(ui_FanStatTitle1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_FanStatTitle1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_FanStatTitle1, LV_ALIGN_TOP_RIGHT);
    lv_label_set_text(ui_FanStatTitle1, "Fan");
    lv_obj_set_style_text_color(ui_FanStatTitle1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_FanStatTitle1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_FanStatTitle1, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_FanIMG1 = lv_img_create(ui_Button2);
    lv_img_set_src(ui_FanIMG1, &ui_img_974855107);
    lv_obj_set_width(ui_FanIMG1, LV_SIZE_CONTENT);   /// 75
    lv_obj_set_height(ui_FanIMG1, LV_SIZE_CONTENT);    /// 75
    lv_obj_set_x(ui_FanIMG1, -10);
    lv_obj_set_y(ui_FanIMG1, 0);
    lv_obj_set_align(ui_FanIMG1, LV_ALIGN_LEFT_MID);
    lv_obj_add_flag(ui_FanIMG1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_FanIMG1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Stat3 = lv_label_create(ui_Button2);
    lv_obj_set_width(ui_Stat3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Stat3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Stat3, 10);
    lv_obj_set_y(ui_Stat3, 5);
    lv_obj_set_align(ui_Stat3, LV_ALIGN_BOTTOM_RIGHT);
    lv_label_set_text(ui_Stat3, "OFF");
    lv_obj_set_style_text_color(ui_Stat3, lv_color_hex(0xE70303), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Stat3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Stat3, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_WateringIcon, ui_event_WateringIcon, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_LightIcon, ui_event_LightIcon, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_FanIcon, ui_event_FanIcon, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Screen2, ui_event_Screen2, LV_EVENT_ALL, NULL);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    ui_Screen2_screen_init();
    lv_disp_load_scr(ui_Screen1);
}
