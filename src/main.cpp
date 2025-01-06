#include <Arduino.h>
#include "esp32-setup.h"
#include "esp32-functions.h"

void setup() {
  // inicialización
  esp32_serial_setup(115200);
  esp32_io_setup();
}

void loop() {
  // ciclo principal:
  if (read_button(BUTTON)){
    reset_output(LED1, LED2);
    Serial.println("button OFF");
  }else{
    set_output(LED1, LED2);
    Serial.println("button ON");
  }
}

