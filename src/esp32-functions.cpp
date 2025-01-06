#include <Arduino.h>
#include "esp32-functions.h"

// lee el valor lógico de un botón
bool read_button(int button_pin){
    return digitalRead(button_pin);

}

void set_outputs(int out1, int out2){
    digitalWrite(out1, LOW);
    digitalWrite(out2, HIGH);

}

void reset_outputs(int out1, int out2){
    digitalWrite(out1, HIGH);
    digitalWrite(out2, LOW);

}