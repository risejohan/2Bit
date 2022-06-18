/*
 * 
 * 555 Watchdog Timer Demo
 * This code demonstrates usage of the 555 watchdog timer described at
 * http://upperbound.com/projects/555-watchdog-timer/
 * 
 * The Serial output helps confirm that the Arduino is sending the heartbeat and being reset when appropriate.
 * 
 * Copyright 2016 UpperBound.com. All rights reserved.
 * 
 * 
 */

#include <MsTimer2.h>

int heartbeatPin = 10; // The Arduino will send the heartbeat at this output pin.
int heartbeatInterval = 4000; // Heartbeat will be sent to the 555 timer at this interval, in milliseconds.

/* 
 *  
 *  Sends a heartbeat to the 555 timer chip.
 *  
 */
void heartbeat() {

  Serial.println("Heartbeat sent!");
  pinMode(heartbeatPin, OUTPUT);
  digitalWrite(heartbeatPin,LOW);
  
  delay(100); // Should be enough time to pulse to get the 555 to recognize it.

  digitalWrite(heartbeatPin, HIGH);
  
  // Return to high impedance
  pinMode(heartbeatPin, INPUT);
}

void setup() {
    Serial.begin(9600);
    Serial.println("*** Arduino reset ***");

    // Setup and start the heartbeat interval
    MsTimer2::set(heartbeatInterval, heartbeat); 
    MsTimer2::start();
}

void loop() {

  // Do other stuff in here.
}



