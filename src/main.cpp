#include <Arduino.h>
#include <SPI_STRUCTS.hpp>
#include <SPI.h>

SPIClass *spi = nullptr;

void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  Check_SPI_PINS();
}

void loop() 
{
  // put your main code here, to run repeatedly:
}