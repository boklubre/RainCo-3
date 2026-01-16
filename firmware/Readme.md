# RainCo 3 - Firmware

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
<br><br>




## Initial installation of the firmware

If you have a brand new ESP32S3, it must be programmed via the USB-C port the first time you use it. The easiest way to do this is with the [ESPHome Web tool](https://web.esphome.io/?dashboard_install). 
<br><br>
All you need is a PC connected to the internet, a USB-C cable and the ESP32S3 controller. There are always two versions of the firmware available for download. One with the extension x.ota.bin and one with the extension x.factory.bin. The x.factory.bin version is required for programming via ESPHome Web. This should be downloaded in advance and saved on your PC.
<br><br>
Then proceed as shown in these instructions:
<br>
[Install the ESPHome firmware for ESP32 via ESPHome Web](https://www.youtube.com/watch?v=J3AVeZCoLK8)




[Back to Main-Page](/../main/#required_components)

