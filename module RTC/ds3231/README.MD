The RTC (Real Time Clock) or Real Time clock are the ideal solution when we need to integrate time measurements to our projects. The RTCs are very low consumption so they can be powered by batteries and thus not lose synchronization. While microcontrollers have internal counters, these are not as accurate as a dedicated RTC.

The module is based on the RTC DS3231 from MAXIM and the EEPROM AT24C32 from ATMEL. Both integrated circuits share the same communication bus with the I2C Protocol. The RTC DS3231 is the evolution of the classic RTC DS1307. The main difference to the DS1307 is the internal temperature compensated oscillator, which makes its precision very high. The AT24C32 EEPROM memory allows to store 32Kbits (4K Bytes) of data permanently.


RTC FUNCTIONS
Date with seconds, minutes, hours, day number, day of the week, month and year.
Leap year compensation.
Time format configurable in 12 or 24 hours
2 configurable alarms
Temperature compensation circuit for internal reference voltage
TECHNICAL SPECIFICATIONS
Supply voltage: 3.3V - 5V DC
DS3231 high precision RTC with internal oscillator
Clock Accuracy: 2ppm
Digital communication interface: I2C
DS3132 I2C address: Read (11010001) Write (11010000)
AT24C32 EEPROM memory (4K * 8bit = 32Kbit = 4KByte)
Programmable square wave output
The battery can keep the RTC working for 10 years.

It can be used in cascade with another I2C device, the AT24C32 address can be modified (by default it is 0x57)
Connection for Arduino Uno:
SCL - A5
SDA - A4
VCC - 5V
GND - GND


LINKS
Datasheet DS3231 Maxim
Datasheet AT24C32 Atmel
RTC Ds3231 Library for Arduino
Arduino Time Library
Library for PICC
RTC Tutorial in English
EEPROM tutorial in English
NeoTeo article on RTC
Neote Article about EEPROM