# RainCo 3.x
<br>

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
<br><br>
To create the control times for the individual spray circuits, there are 2 options in my approach:
<br>
1. A web interface can be used to set up to 3 spray times per spray circuit, each with individual spray durations. <br>

2. In addition, you can control each individual spray circuit with a Home Assistant system and, of course, adjust the spray duration according to your needs.
   
<br>
The connection to Home Assistant in particular offers endless possibilities, including automatic seasonal adjustments to spray times and spray durations.

<br><br>


![RainCo PCB](/../main/images/RainCo-3.02.png)




### A third-level heading
