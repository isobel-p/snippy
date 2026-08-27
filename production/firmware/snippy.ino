#include "UsbHid.h"

unsigned long debounce[3] = {0,0,0};

void setup() {
  pinMode(30, INPUT_PULLUP);
  pinMode(31, INPUT_PULLUP);
  pinMode(32, INPUT_PULLUP);
  USBInit();
}

// the loop function runs over and over again forever
void loop() {
  // active window
  if (pressed(30, 0)) {
    keyboard_press(KEY_LEFT_GUI);
    keyboard_press(0x46); //print screen
    keyboard_release(0x46);
    keyboard_release(KEY_LEFT_GUI);
  }

  // launch screenshot app
  if (pressed(31, 1)) {
    keyboard_press(0x46);
    keyboard_release(0x46);
  }

  // all screens
  if (pressed(32, 2)) {
    keyboard_press(KEY_LEFT_SHIFT);
    keyboard_press(0x46);
    keyboard_release(0x46);
    keyboard_release(KEY_LEFT_SHIFT);
  }
}

bool pressed(int pin, int index) {
  if (digitalRead(pin) == LOW) {
    if (millis() - debounce[index] > 20) {
      debounce[index] = millis();
      return true;
    }
  } else {
    debounce[index] = millis();
  }
  return false;
}