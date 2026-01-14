# RainCo 3.x
<br><br>

<p align="center">
   <img src="/../main/img/Header.png" width="800" alt="Header"/>
</p>

<br><br>


> [!CAUTION]
> This project is a DIY project!
> <br><br>
I do not offer complete systems.
> <br><br>
You can only purchase a kit for the control board from me.
> <br>
> All SMD components are already installed. Only the THT components (THT = Through Hole Technology) still need to be soldered.
> <br><br>
> I will try to describe all other necessary steps and components as accurately as possible.

<br>

> [!NOTE]
> I am planning a small series of 10-15 pieces for Februar - March 2026. 
> <br><br>
> The cost for a kit is €55 plus shipping (€7 within Germany, €15 within the European Union; insured parcel in each case).
> <br><br>
> If you are interested, please feel free to contact me.


<br>

<p align="center">
   <img src="/../main/img/FpardalisRain.png" width="300" alt="RainCo PCB"/>
</p>

## Introduction
I have been involved in terrarium keeping for decades and have been using sprinkler systems for a long time. Unfortunately, the control methods have not been particularly user-friendly or quick and dynamic to adjust.
<br>
Even though there are now very good smart sockets with Wi-Fi or Thread that can be easily integrated into most smart home systems, it is still difficult to control them with split-second precision.
<br>
Another problem is that although you can irrigate several terrariums with one irrigation system, they are all irrigated in the same way. If you want to implement different irrigation times, you need separate pumps (and possibly also water tanks) and separate controls for each one.
<br><br>

I have come up with an approach that solves both the control problem and the problem of needing multiple pumps.
I would like to present this approach here and share many of my thoughts with the general public.
<br><br>

The project is called ‘RainCo’ for ‘Rain Control’. I am now on version 3.x. The other versions are early developments that still had a few weaknesses here and there. 
The current version has been in use for about a year and is running smoothly!
The system consists of a control board and one or two valve carriers. 
The whole thing is a DIY project! You should have a little technical expertise and be able to use a soldering iron.
<br><br>

I do not offer complete functional kits!
<br>
However, I try to keep all the necessary steps as simple as possible and explain exactly what to do.
<br><br>

In my test setups, I use pumps, nozzles, hoses, etc. from M.R.S. – Micro Rain Systems (no, I am not sponsored by them!). Of course, I know that there are other companies that offer very good materials in this area. However, I am currently limiting myself to M.R.S. as I have not had any problems with their products so far.
<br><br><br>


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

<p align="center">
   <img src="/../main/img/RainCo30-01.png" width="600" alt="RainCo PCB"/>
</p>

<br>

<p align="center">
   <img src="/../main/img/Valve-Plate-4-01.png" width="600" alt="Valve Board"/>
</p>
<br><br>



To create the control times for the individual spray circuits, there are 2 options in my approach:
<br>
1. A web interface can be used to set up to 3 spray times per spray circuit, each with individual spray durations. <br>

2. In addition, you can control each individual spray circuit with a Home Assistant system and, of course, adjust the spray duration according to your needs.
   
<br>
The connection to Home Assistant in particular offers endless possibilities, including automatic seasonal adjustments to spray times and spray durations.

<br><br>

>


<br><br>

## Valves
Here you find infomation about the [Valves](/../main/valves).


<br><br>


## Required Haousing
Hers you find more information about then [Housing](/../main/housing).

<br><br>

## Required components

The following components are required to set up a RainCo system:

• Irrigation system consisting of tank, pump, nozzles, suitable hose connectors and hose supply lines.

• 1 x [control board kit](/../main/pcb)

• 1 x [ESP32S3-DevBoard](/../main/pcb)

• 1 x [housing](/../main/housing) (purchased or printed)

• Up to 6 x [valves](/../main/valves) (24V) incl. cabling

• Printed valve [carrier](/../main/valves) plate, if necessary





