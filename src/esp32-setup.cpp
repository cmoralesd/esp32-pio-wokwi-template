#include <Arduino.h>
#include "esp32-setup.h"

// put function definitions here:
void esp32_io_setup(void) {
  pinMode(BUTTON, INPUT_PULLUP);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}