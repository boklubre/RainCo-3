# RainCo 3.x
<br>

> [!CAUTION]
> This project is a DIY project! I do not offer complete systems. You can only purchase a kit for the control board from me. All SMD components are already installed. Only the THT components (THT = Through Hole Technology) still need to be soldered.
> <br><br>
I will try to describe all other necessary steps and components as accurately as possible.

<br>
<a href="http://google.com/" target="_blank">Hello, google!</a>

## Introduction
I have been involved in terrarium keeping for decades and have been using sprinkler systems for a long time. Unfortunately, the control methods used to date have not been particularly user-friendly or quick and dynamic to adjust.
<br><br>
Even though there are now very good smart sockets with Wi-Fi or Thread that can be easily integrated into most smart home systems, it is still difficult to control them with split-second precision.
<br><br>
Another problem is that although you can irrigate several terrariums with one irrigation system, they all get the same amount of water. If you want to have different irrigation times, you need separate pumps (and possibly also water tanks) and separate controls for each one.
I have come up with an approach that solves both the control problem and the problem of needing multiple pumps.
<br><br>
I would like to present this approach here and share many of my thoughts with the general public.
<br><br>
I have named the project ‘RainCo’ for ‘Rain Control’. I am now on version 3.x. The other versions are early developments that still had their weaknesses here and there. 
I have been using the current version for about a year and it runs without any problems!
<br><br>

## The Idea

The conventional setup consists of a pump operating a spray circuit. 
<br><br>
A spray circuit can contain several spray nozzles and thus spray several terrariums simultaneously with the same parameters (spray time & spray duration).
<br><br>
To operate several spray circuits on one pump, it must be possible to control each individual spray circuit via a valve. 
If this is the case, the maximum number of spray nozzles (depending on the pump's performance) can be increased many times over by dividing them across several spray circuits!
<br><br>
The solution is a control system that can control several valves (spray circuits) in addition to the pumps.
The control board I developed can control 2 pumps and 6 spray circuits. The firmware was created with ESPHome. 

<br>

![RainCo PCB](/../main/images/RainCo-3.02.png)

<br>

To create the control times for the individual spray circuits, there are 2 options in my approach:
<br>
1. A web interface can be used to set up to 3 spray times per spray circuit, each with individual spray durations. <br>

2. In addition, you can control each individual spray circuit with a Home Assistant system and, of course, adjust the spray duration according to your needs.
   
<br>
The connection to Home Assistant in particular offers endless possibilities, including automatic seasonal adjustments to spray times and spray durations.

<br><br>


## Firmware

There are various programming options available for programming an ESP32-S3. 
<br><br>

I decided to use [ESPHome](https://esphome.io). The main reason is that it connects very easily to Home Assistant, an extremely powerful and easy-to-set-up smart home system. In addition to the irrigation system, Home Assistant also controls all the lighting in my terrariums, with different daylight hours for each season, including overheating protection in summer.
<br><br>

But even without Home Assistant, the system can be configured via a web browser, and you can set up to three switching times per day with different spray durations for each spray circuit.
<br><br>

However, connecting to Home Assistant gives you much more flexibility in terms of spray times and durations. This allows you to automate different spray times and durations depending on the season (e.g., dry and rainy seasons). The possibilities here are endless.
<br><br>

The ESPHome program I developed is available for download as source code and compiled file on Github. The source code can be modified and further developed as desired.
<br><br>

Anyone is also free to use the hardware suggested here and create their own firmware with a programming environment of their choice. I have tried to document the hardware to the best of my knowledge so that adaptation should be relatively easy.

<br><br>

## Required components


The following components are required to set up a RainCo system:

• Irrigation system consisting of tank, pump, nozzles, suitable hose connectors and hose supply lines.

• 1 x control board kit

• 1 x ESP32S3A controller 

• 1 x housing (purchased or printed)

• Up to 6 x valves (12V or 24V) incl. cabling

• Printed valve carrier plate, if necessary





