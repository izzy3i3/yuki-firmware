#pragma once
#include <cinttypes>
#include <Arduino.h>
#include <SPI.h>
#include <Wire.h>

//TODO:Task scheduler

enum PINS_SPI_MASTER
{
    PIN_SCLK,
    PIN_MOSI,
    PIN_MISO,
    CS
};

void Check_SPI_PINS();

//Usar literais binarios. EX:
//0b1000, 0b0100->motor
//0b10000, 0b00100->data
void SendData(SPIClass &spi, byte motor, uint_fast16_t data, const int clock);
void TestSPI(bool power);
