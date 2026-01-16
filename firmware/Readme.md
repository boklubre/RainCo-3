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
If you have an untouched ESP32S3, the firmware must be uploaded via the USB-C socket the first time. The easiest way to do this is with the [ESPHome Web tool](https://web.esphome.io/?dashboard_install). 
<br><br>
All you need is a PC connected to the internet, a USB-C cable and the ESP32S3 controller. There are always two versions of the firmware available for download. One with the extension x.ota.bin and one with the extension x.factory.bin. The x.factory.bin version is required for programming via ESPHome Web. This should be downloaded in advance and saved on your PC.
<br><br>
Then proceed as shown in these instructions: [Install the ESPHome firmware for ESP32 via ESPHome Web](https://www.youtube.com/watch?v=J3AVeZCoLK8)
<br>

When using the [ESPHome Web tool](https://web.esphome.io/?dashboard_install) and attempting to connect the ESP32S3, several devices may be displayed.
<br>
If you are uncertain which device is the correct one, simply disconnect the USB-C plug from the ESP32S3 controller in this view. The correct connection will then disappear and reappear after reconnecting.
<br><br>

## Connecting to your own WiFi
The easiest way to connect the RainCo-3 system to your own WiFi is to search for the WiFi network ‘RainCo3-AP’ with a mobile phone after uploading the firmware and connect to it.
<br>

You will then be taken to a page where you can select one of the available WiFi networks. After selecting a WiFi network and entering the corresponding password, RainCo-3 will reboot. It should then be connected to your WiFi and have automatically received an IP address via which the web interface can be accessed.
<br>

This IP address can be read on the display by pressing the rotary encoder four times. 

<br><br>

[Back to Main-Page](/../main/#required_components)

