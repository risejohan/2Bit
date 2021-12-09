# SD Module

![alt text](https://github.com/risejohan/2Bit/blob/main/MicroSD/Board.png "Board")

![alt text](https://github.com/risejohan/2Bit/blob/main/MicroSD/Top.png "Front")

## Start 🚀

_Be able to use the designs of the common modules to have available and apply to electronic designs._


### Pre requirements 📋

_SD and micro SD cards have become a standard, displacing other data storage media due to their large capacity and small size. For this reason they have been integrated into a large number of devices, currently being frequent components in computers, tablets and smartphones, among others._

_Within the world of Arduino, it is possible to find low cost readers for both SD and micro SD cards. The first to appear were the SD readers and later the micro SD ones. Therefore, in general, the modules with micro SD are more modern models than those of SD_

_In both types of readers, the reading can be done through the SPI bus. Although they may have other interfaces, such as I2C or UART bus, it is usually preferable to use SPI due to its high transfer rate._


### Conditions and Characteristic🔩

##### Connection SPI
[![SPI](SPI "SPI")](https://www.analog.com/-/media/images/analog-dialogue/en/volume-52/number-3/articles/introduction-to-spi-interface/205973_fig_01.png?la=en&imgver=2 "SPI")

4-wire SPI devices have four signals:
- Clock (SPI CLK, SCLK)
- Chip select (CS)
- Master out, slave in (MOSI)
- Master in, slave out (MISO)

###### Data
The SD format includes five versions of cards, available in three sizes. The five families are:

- "Standard Capacity" (SDSC), the original, "standard capacity",
- "High Capacity" (SDHC), "high capacity",
- "Extended Capacity" (SDXC), "extended capacity",
- “Input / Output” (SDIO), «input / output»,
- "Ultra Capacity" (SDUC), "Ultra Capacity"

The three sizes are:

- Original standard SD,
- miniSD,
- micro SD.

Chip Quadruple Bus Buffer Gate With 3-State Outputs, Inputs can be driven from either 3.3-V or 5-V devices. This feature allows the use of this device as a translator in a mixed 3.3-V/5-V system environment.

**Note: The module doesn´t have a 5V or 3.3V regulator, it is necessary to be able to supply it for its correct operation.**


#### Links

- [SN74LVC125A](https://www.ti.com/lit/ds/symlink/sn74lvc125a.pdf?ts=1639008407340&ref_url=https%253A%252F%252Fwww.google.com%252F)


## Built with 🛠️

Development sofware:
[Eagle](https://www.autodesk.com/products/eagle/overview) - Electronic design software


## Version 📌

For all available versions, look at the [tags in this repository](https://github.com/risejohan/2Bit/tree/main/module%20RTC/ds3231).

## Authors ✒️
* **Johan Riascos** - *Electronic developer* - 
* [Github](https://github.com/risejohan)
* [Instagram Personal](https://instagram.com/johansegura92?utm_medium=copy_link)
* [Instagram 2bit](https://instagram.com/2bit_electronic?utm_medium=copy_link)


You can also look at the list of all the [contributors] (https://github.com/risejohan/2bit/contributors) who have participated in this project.


###  Expressions of gratitude 🎁
---
For the entire community that wishes to add and shows appreciation for sharing knowledge. Welcome to everyone who wishes to contribute in favor of technology.

#### Contributions
If you want to invite us to a coffee ☕ and contribute to continue uploading  content ⬆ . You can do it here 👇🏻
⌨️ con ❤️❤️❤️ [Donation](https://paypal.me/2bitelectronic "Donation") 😊
