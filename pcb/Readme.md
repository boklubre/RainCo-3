# RainCo - PCB
<br><br>
## technical informations

<p align="center">
   <img src="/../main/img/RainCo308-1.png" width="600" alt="RainCo PCB"/>
</p>

<br><br>

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

## ESP32-Controller

The core component is an ESP32-S3 chip. More specifically, it is an M5StampS3A controller with 1.27 header pins offered by M5Stack. 
<br><br>
The M5StampS3A must be purchased separately. It can be purchased for a small amount of money (approx. $12-14 plus shipping costs) from the manufacturer's online store or from local distributors. 
<br><br>
This controller is available in three different versions:
* without header pins
* with 2.54 header pins
* with 1.27 header pins
The controller with 1.27 header pins is required!
<br><br>

<p align="center">
   <img src="/../main/img/ESP32-s3-devboard.jpg" width="600" alt="ESP32-S3 Dev-Board"/>
</p>

The controller is programmed for initial use either via an ESPHome installation (e.g., on a Home Assistant system) or via the ESPHome WebInstaller.
Once the ESPHome firmware is installed, further updates can be installed via the web interface “Over-the-Air” (OTA).
<br><br>


<p align="center">
   <img src="/../main/img/ESP32-s3-devboard-PinOut.jpg" width="600" alt="ESP32-S3 - Dev-Board - Pin Out"/>
</p>
<br><br
