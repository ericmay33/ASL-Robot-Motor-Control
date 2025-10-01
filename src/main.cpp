#include <Arduino.h>
#include <ESP32Servo.h>

// put function declarations here:
Servo indexFinger;
Servo middle;
Servo ring;
Servo pinky;
Servo thumb;

void setup() {
  // put your setup code here, to run once (pin setup)
  indexFinger.attach(D2);
  middle.attach(D3);
  ring.attach(D4);
  pinky.attach(D8);
  thumb.attach(D7);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Open hand
  indexFinger.write(0);
  middle.write(0);
  ring.write(0);
  pinky.write(0);
  thumb.write(170);
}

// put function definitions here:
