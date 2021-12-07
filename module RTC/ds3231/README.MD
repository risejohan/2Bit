# RTC Module 

![alt text](https://github.com/risejohan/2Bit/blob/main/module%20RTC/ds3231/Top.png "RTC")

![alt text](https://github.com/risejohan/2Bit/blob/main/module%20RTC/ds3231/Board.png "RTC")

## Start 🚀

_Be able to use the designs of the common modules to have available and apply to electronic designs._


### Pre requirements 📋

_The RTC (Real Time Clock) or Real Time clock are the ideal solution when we need to integrate time measurements to our projects. The RTCs are very low consumption so they can be powered by batteries and thus not lose synchronization. While microcontrollers have internal counters, these are not as accurate as a dedicated RTC_


### Conditions and Characteristic🔩


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

Pin | Name
--- | --- |
*SCL* |A5 |
*SDA* |A4 |
*VCC* |5V |
*GND* |GND|

LINKS

[Datasheet DS3231 Maxim](http://datasheets.maximintegrated.com/en/ds/DS3231.pdf)

[Datasheet AT24C32](http://www.atmel.com/images/doc0336.pdf)

[Library Arduino RTC](http://playground.arduino.cc/Code/time)

[Article Neoteo about RTC](http://www.neoteo.com/ds1307-reloj-en-tiempo-real-con-18f2550/)

## Built with 🛠️

Development sofware:
* [Kicad](https://www.kicad-pcb.org/) - Electronic design software



### Components
_MAXIM and the EEPROM AT24C32 from ATMEL_

_DS3231_

## Version 📌

For all available versions, look at the [tags in this repository](https://github.com/risejohan/2Bit/tree/main/module%20RTC/ds3231).

## Authors ✒️
* **Johan Riascos** - *Electronic developer* - 
* [Github](https://github.com/risejohan)
* [Instagram Personal](https://instagram.com/johansegura92?utm_medium=copy_link)
* [Instagram 2bit](https://instagram.com/2bit_electronic?utm_medium=copy_link)


You can also look at the list of all the [contributors] (https://github.com/risejohan/2bit/contributors) who have participated in this project.


## Expressions of gratitude 🎁
Implementation of electronic modules 📢
---
⌨️ con ❤️ por [Johan Riascos @johan-rise) 😊
