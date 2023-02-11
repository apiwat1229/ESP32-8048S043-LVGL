HardwareSerial Receiver(0);  // Define a Serial port instance called 'Receiver' using serial port 2

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
}

void loop() {

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