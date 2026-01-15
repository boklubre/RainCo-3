# RainCo - PCB
<br><br>

<p align="center">
   <img src="/../main/img/RainCo308-1.png" width="600" alt="RainCo PCB"/>
</p>

<br><br>


## Technical informations

* ESP32-S3DevBoard – N16R8
* OLED display with 128x32 pixels
* Rotary encoder for operation
* Connection of up to 2 pumps; for example, a rain pump and a secondary pump
* Up to 6 valves for up to 6 different spray circuits
* Connection for water tank monitoring (3 sensors: min, half, max)
* 3 x connections for sensors for DHT22 or DS18B20; for future use
* 1 x I2C connection; for future use
* Condition possible via web interface
* Controllable via the ‘Home Assistant’ smart home system 
<br><br><br>


<a name="controller"></a>
## ESP32-Controller

The core component is an ESP32-S3 DevBoard (N16R8) with the original pin layout and 16MB flash and 8MB PSRAM.
<br>
Unfortunately, there are at least two different pin layouts under the name ESP32-S3 DevBoard.
<br>
This is how the pin assignment should look:
<br>

<p align="center">
   <img src="/../main/img/ESP32-s3-devboard-PinOut.jpg" width="600" alt="ESP32-S3 - Dev-Board - Pin Out"/>
</p>
<br><br>

The ESP32-S3 DevBoard is available from various manufacturers, is readily available and can be purchased at a reasonable price from Amazon or AliExpress, for example. The cost is approximately €8-12 per board. 
<br><br>

<p align="center">
   <img src="/../main/img/ESP32-s3-devboard.jpg" width="600" alt="ESP32-S3 Dev-Board"/>
</p>
<br><br>

The controllers are often available with or without soldered pin headers. 
<br>
I always recommend the versions with soldered pin headers. 
<br>
They only cost a little more, but they save you some work.
<br><br>

Waveshare offers the compatible [ESP32-S3-DEV-KIT-N16R8](https://www.waveshare.com/esp32-s3-dev-kit-n8r8.htm?sku=28836), which can also be found under this name on Amazon and other retailers. It is slightly more expensive than the generic boards.
<br><br><br>


## Firmware

There are various programming options available for programming an ESP32-S3. 
<br><br>

I decided to use [ESPHome](https://esphome.io). The main reason is that it connects very easily to [Home Assistant](https://www.home-assistant.io/), an extremely powerful and easy-to-set-up smart home system. In addition to the irrigation system, Home Assistant also controls all the lighting in my terrariums, with different daylight hours for each season, including overheating protection in summer.
<br><br>

But even without Home Assistant, the system can be configured via a web browser, and you can set up to three switching times per day with different spray durations for each spray circuit.
<br><br>

However, connecting to Home Assistant gives you much more flexibility in terms of spray times and durations. This allows you to automate different spray times and durations depending on the season (e.g., dry and rainy seasons). The possibilities here are endless.
<br><br>

The ESPHome program I developed is available for download as source code and compiled file on Github. The source code can be modified and further developed as desired.
<br><br>

Anyone is also free to use the hardware suggested here and create their own firmware with a programming environment of their choice. I have tried to document the hardware to the best of my knowledge so that adaptation should be relatively easy.



<br>

[Back to Main-Page](/../main/)

