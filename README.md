# Tacmote – ATtiny85 IR Remote

Tacmote is a compact universal preprogrammmed IR remote housed inside a tictac box.

## Overview

I wanted to use a Tic Tac box as the enclosure for a small electronics project because of its compact size and portability. So I decided to build Tacmota an IR remote controlling my TV and air conditioner from a single device, eliminating the need for me to carry multiple remotes.

## How It Works

Tacmote uses an attiny85 ic microcontroller that runs a custom firmware where you can store the uniuqe 112-bit Pulse Distance IR protocol of the remote you want to replicate.When the user presses the designated pushbutton the IRremote transmits the corresponding IR code, replicating the orginal remote. 

## Hardware

The project consists of:

* ATtiny85 ic microcontroller
* Infrared LED
* Two push buttons
* Indication LED
* 120 mAh rechargeable LiPo battery
* TP4056 USB-C charging module
* spdt slide switch
* Tic Tac box enclosure

## Current Features

* Compact and lightweight design
* Transmits a prerecorded air-conditioner IR command
* Programable for new IR signals
* Rechargeable via USB-C


