#include <Arduino.h>
#include "esp32-setup.h"
#include "esp32-functions.h"

void setup() {
  // put your setup code here, to run once:
  esp32_io_setup();
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  bool btn_state = read_button(BUTTON);

  if (btn_state){
    set_outputs(LED1, LED2);
    Serial.println("button OFF");
  }else{
    reset_outputs(LED1, LED2);
    Serial.println("button ON");
  }
}