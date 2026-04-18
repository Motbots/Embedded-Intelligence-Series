/* ------------------------------------------------------------------------------
 * Project: LDR Circuit
 * Written by: Dustin Hodges (Motbots)
 * Date Created: 04/15/2026
 * Date Last Modified: 04/16/2026
 * Description: This is part of an example microcontroller circuit for the article
 * on the website titled "Real-World Interface: Connecting Microcontrollers to the
 * Physical World"
 *
 * Microcontroller Board: Arduino Uno R3
 * IDE Version: Arduino IDE 2.3.8
 * Items Used:
 * -  Arduino Uno
 * -  Breadboard
 * -  Photoresistor (LRD)
 * -  10kΩ resistor
 * -  Jumper wires
 * -  USB cable
 *
 * Article URL: https://motbots.com/real-world-interfacing-microcontrollers
 * ------------------------------------------------------------------------------
 */

const int ldrPin = A0;                  // LDR leg tied to pin A0 on Arduino

void setup() {
  Serial.begin(9600);
}

void loop() {
  int lightValue = analogRead(ldrPin);  // read the analog value from pin A0
  Serial.println(lightValue);           // print the value on to the Serial Monitor
  delay(300);                           // delay 300 milliseconds — delay helps prevent overwhelming serial communication
}