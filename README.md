# PRU_Workshop_Jan_2020
Notes from PRU workshop and hands-on by Jason Kridner at GeorgiaTech on January 30th 2020

## Preliminary notes

This has been tested on the following images:

- July 28th 2020:  [bone-debian-10.3-iot-armhf-2020-04-06-4gb.img](https://beagleboard.org/latest-images)
- February 18th 2020: [pru-workshop-2020-01-30.img](http://debian.beagleboard.org/images/pru-workshop-2020-01-30.img.xz)

To try other images you can find the latest images [here](http://beagleboard.org/latest-images)

This is supposed to run on the [Beaglebone Pocket](http://beagleboard.org/pocket) mounted on the [TechLab board](https://beagleboard.org/capes/techlab). But they can be easily adapted on Beaglebone Black as the two boards run on TI chip.

## PRU examples in the Tech lab folder
 
Allow the examples are located under `/var/lib/cloud9/PocketBeagle/TechLab`. 
__AnalogIn.pru0.c__ is a very usefull example that uses the PRU with the ADC of the board. The others examples are simpler and more designed to test that everything is working correctly. You can find much more information

### analogIn.pru0.c
This examples uses the PRU to sample the ADC of the Board, the samples are then sent back to the ARM using rpmsg transport structure. The code is located under `/var/lib/cloud9/PocketBeagle/TechLab/.challenges`, it won't compile and need some modifications:
 1. Take the following the files in the [include folder](analog_in/include) and place them under `/var/lib/cloud9/common`, they are files required to compile the example and that are not initially included in the example. 
 2. Now you can compile, place and start the code on the PRU. As for the other examples it is done with (__Do NOT include the `.c` in the command__):
  ```
  cd /var/lib/cloud9/PocketBeagle/TechLab/.challenges
  make -f ../../../common/Makefile TARGET=analogIn.pru0
  ```
 3. After compilation you won't see much happening, that's normal. However, you can check with `cat /sys/class/remoteproc/remoteproc1/state` that PRU0 running and sending the ADC measurement to the rpmsg device character on the ARM-Cortex. Now we need to read this device character. 
 4. Retrieving data on the ARM-Cortex:
    1. copy the 2 files: [deploy_arm.sh](analog_in/deploy_arm.sh) and [rpmsg_from_user_space.c](analog_in/rpmsg_from_user_space.c), in the directory `/var/lib/cloud9/PocketBeagle/TechLab/.challenges`
    2. You can modify `rpmsg_from_user_space.c` by commenting and uncommenting Option 1 and 2 in order to either read 10 samples and stop or continously read the samples received from the PRU.
    2. To deploy the ARM code, just run:  `sh deploy.sh`
    

 
### sleep.pru0.c
This is a good example to set a PRU to idle when we are not using it. If we have started any other code on the PRU before running this example will kill it. To run this example from the `TechLab/` folder run: 

`make -f ../../common/Makefile TARGET=sleep.pru0` __Do NOT include the `.c` in this command__ 

The make file under `common/` is very usefull as it will compile the PRU codes for most of the BeagleBoard, place the executable in the PRU and start the PRU. There is not much more to say on this code as the program run on the PRU is an empty program.


### rgb.pru0.c
Use two leds connected to P1_33 and P1_36 as PRU output and another LED that is not connected to the PRU output but connected to the GPIO (P2_01). This programs demostrates the access to the GPIO from the PRU.

To run this example: 

`make -f ../../common/Makefile TARGET=rgb.pru0` __Do NOT include the `.c` in this command__ 


 #### Comments on rdg.pru.c:
 
* In order to let the PRU control the 3 Pins we need to writes in the following files:
   - `/ocp:P1_36_pinmux/state pruout` for a PRU out pin  (here P1_36)
   - `/ocp:P2_01_pinmux/state gpio` for a gpio pin (here P2_01), note that the dirrection of the gpio pin also needs to be set by writting on the file: `/sys/class/gpio/gpio5 direction/out` (GPIO5 is connected to P2_01)
This is done is rgb.pru0 in the datastructure _init_pins[]_. 

* Then the PRU can control the output of those pin by setting the bit corresponding to the output, we can then use the `__R30` and `__R31` registers to accesss the PRU's internals CPU. The changing of color is mostly done using bit logic that I do not fully understand... 
 
### Buzz-button.pru0.c : 
Usefull for every GT student ! :) This example is located under `/var/lib/cloud9/PocketBeagle/TechLab/.challenges`. 

`make -f ../../../common/Makefile TARGET=buzz-button.pru0` __Do NOT include the `.c` in this command__ 




## Misc Notes from the workshop

### Some nice tricks and tips given by Jason Kridner during the workshop:  

1- If you are using a beaglebone pocket running on an 16Go SD Card. Under `/opt/scripts/tools` run `sudo ./grow_partition.sh` this will free space on you SD card. Linux will take 4Go and you will be able to use the 12Go remaining. 
2- In order to show the state of the pin of the Beaglebone. `opt/scripts/device/bone/show-pins.pl`
3- To get info about internet connection of the BeagleBone Pocket (using internet connection sharing). `/opt/scripts/network`

### About Shared Memory and Rpmsg: 
"Use rmpsg until it is not enough and then change to shared memory" 

There are two ways to communicate between the PRUs and the Cortex-ARM:
#### __Shared Memory__ : 
 More complicated methode but enables to transfert more data. 
#### __Rpmsg__: 
rpmsg relies on a ring buffer and is much easier to use than the shared memory. This should be the first choice for anyone trying to communicated between the PRU and the Cortex-ARM:
- Rpmsg is used under the hood by the makefile that runs the examples. The file export the compiled firmware under `/sys/class/remoteproc/remoteproc1/firmware/` (`remoteproc1/` is associated to PRU0 and `remoteproc2/` is associated to PRU1). 
- We can check the state of our PRU by doing:
` cat /sys/class/remoteproc/remoteproc1/state` 


