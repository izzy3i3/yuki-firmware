#include "SPI_STRUCTS.hpp"

void Check_SPI_PINS()
{
    Serial.print("SCK: ");
    Serial.println(SCK);
    Serial.print("MOSI: ");
    Serial.println(MOSI);
    Serial.print("MISO: ");
    Serial.println(MISO);
    Serial.print("CS: ");
    Serial.println(SS);
}

void SendData(SPIClass *spi, byte motor, uint_fast16_t data, const int clock)
{
    spi->beginTransaction(SPISettings(clock, MSBFIRST, SPI_MODE0));
    spi->transfer(motor);
    spi->endTransaction();

    spi->beginTransaction(SPISettings(clock, MSBFIRST, SPI_MODE0));
    spi->transfer(data);
    spi->endTransaction();
}

void TestSpi(bool power)
{
    
}