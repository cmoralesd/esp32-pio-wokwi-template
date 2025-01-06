#pragma once

// declaraciones de variables de reemplazo
#define BUTTON 5
#define LED1 12
#define LED2 14

// declaración de funciones
void esp32_io_setup(void);
void esp32_serial_setup(int baudrate);