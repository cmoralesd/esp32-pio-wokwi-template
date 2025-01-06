#include <Arduino.h>
#include "esp32-setup.h"

// función para configuración de entradas y salidas
void esp32_io_setup(void) {
  pinMode(BUTTON, INPUT_PULLUP);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

// inicializa la comunicación serial
void esp32_serial_setup(int baudrate) {
    Serial.begin(baudrate);
    Serial.printf("Puerto serie inicializado a %d", baudrate);
    Serial.println("");
}