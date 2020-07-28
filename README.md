# PRU_Workshop_Jan_2020
Notes from PRU workshop and hands-on by Jason Kridner at GeorgiaTech on January 30th 2020

For more information please see the readme

## Preliminary notes

This has been tested on the following images:

- July 28th 2020:  [bone-debian-10.3-iot-armhf-2020-04-06-4gb.img](https://beagleboard.org/latest-images)
- February 18th 2020: [pru-workshop-2020-01-30.img](http://debian.beagleboard.org/images/pru-workshop-2020-01-30.img.xz)

To try other images you can find the latest images [here](http://debian.beagleboard.org/images/)

## PRU examples in the Tech lab folder
 
Allow the examples are located under `/var/lib/cloud9/PocketBeagle/TechLab`. 
__AnalogIn.pru0.c__ is a very usefull example that uses the PRU with the ADC of the board. The others examples are simpler and more designed to test that everything is working correctly. You can find much more information

### analogIn.pru0.c
This examples uses the PRU to sample the ADC of the Board, the samples are then sent back to the ARM using __TO COMPLETE __ 
 
### sleep.pru0.c
This is a good example to set a PRU to idle when we are not using it. If we have started any other code on the PRU before running this example will kill it. To run this example from the `TechLab/` folder run: 

`make -f ../../common/Makefile TARGET=sleep.pru0`

The make file under `common/` is very usefull as it will compile the PRU codes for most of the BeagleBoard, place the executable in the PRU and start the PRU. 

### rgb.pru0.c
Use two leds connected to P1_33 and P1_36 as PRU output and another LED that is not connected to the PRU output but connected to the GPIO (P2_01). This programs demostrates the access to the GPIO from the PRU.

To run this example: 

`make -f ../../common/Makefile TARGET=rgb.pru0`


In order to let the PRU control the 3 Pins we need to writes in the following files
 - `/ocp:P1_36_pinmux/state pruout` for a PRU out pin  (here P1_36)
 - `/ocp:P2_01_pinmux/state gpio` for a gpio pin (here P2_01), note that the dirrection of the gpio pin also needs to be set by writting on the file: `/sys/class/gpio/gpio5 direction/out` (GPIO5 is connected to P2_01)
This is doone is rgb.pru0 in the datastructure,  
 


## Misc Notes from the workshop

Some nice tricks and tips given by Jason Kridner during the workshop:  

1- If you are using a beaglebone pocket running on an 16Go SD Card. Under `/opt/scripts/tools` run `sudo ./grow_partition.sh` this will free space on you SD card. Linux will take 4Go and you will be able to use the 12Go remaining. 
2- In order to show the state of the pin of the Beaglebone. `opt/scripts/device/bone/show-pins.pl`
3- To get info about internet connection of the BeagleBone Pocket (using internet connection sharing). `/opt/scripts/network`
