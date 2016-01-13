## About ##
Firmware for Flysky and clones with Mavlink stack.
Firstly,like Gruvin  , I wanted to thank all those who have contributed to that project to this amazing work, especially Thomas Husterer and Erez Raviv for the very good work.

This project was based on [er9x](http://code.google.com/p/er9x/), which was based on some version of the original **th9x**.
I detail here, only the changes from the version er9x


---

## My little contribution ##
  * I added the Ardupilot Mavlink stack, so we can read some  functions :
    * MAVLINK\_MSG\_ID\_HEARTBEAT: heartbeat (a little star blinking on screen)
    * MAVLINK\_MSG\_ID\_STATUSTEXT: message text displayed on screen
    * MAVLINK\_MSG\_ID\_SYS\_STATUS:  flight mod, battery voltage
    * MAVLINK\_MSG\_ID\_GPS\_RAW: gps informations.
    * MAVLINK\_MSG\_ID\_GPS\_STATUS: number of satelites.
  * I added a software rotary switch
    * It can work by modifying PPM channel
    * or by sending Mavlink commands (two way communications : sending command and receiving flight mod changed).
  * I added the tuning of some PID (PI only) , Mavlink parameters :
    * Rate Yaw
    * Stabilize Yaw
    * Rate Pitch
    * Stabilize Pitch
    * Rate Roll
    * Stabilize Roll
    * Altitude Hold
    * ~~**Crosstrak Correction**~~
    * Loiter
    * Nav WP
  * Another Mavlink Parameters : (ver 1.04)
    * Battery low voltage
    * Battery input voltage
    * Battery monitor
    * Battery capacity

### Configuration ###
  * Configure baud rate for telemetry : 19200/38400/57600
  * ~~**Configure the low level alarm for APM battery**~~
    * The battery configuration is now set by Mavlink parameters.
  * Configure the system identification : 'Mav system id'
  * Configure the rolling switch
  * Configure some Mavlink parameters

---

## Video ##
[video here](http://vimeo.com/29571352)


---

## Download ##
  * **Getting the source code** : [gv9x git repository](http://code.google.com/p/gv9x/source/checkout)
  * **Download the binary** : [download](http://code.google.com/p/gv9x/downloads/list)

---

## Revisions ##
### gv9x ver 1.12 13/08/2012 ###
  * correct the GPS feedback with mavlink 1.0
  * adding GPS status on main screen
  * update mavlink set mode
  * change the order of mavlink params in 'MAV PARAMS' menu
### gv9x ver 1.11 ###
  * Migrate to mavlink 1.0
### gv9x ver 1.10 06/05/2012 ###
  * Add status motor display ARMED/DISARM
  * Last version with Mavlink 0.9
### gv9x ver 1.08 03/03/2012 ###
  * Modification of rotary switch :
```
Remove editing control mode name, replace by a list of control mode.
Update eepe for this new configuration of the rotary switch.
Correct eepe simulation for the rotary switch (now work fine).
Modify the display of the main screen:
 the main screen display the requested control mode 
 and the real APM mode if there not match. 
```
  * Update mavlink control mode
### gv9x ver 1.07 08/01/2012 ###
### gv9x ver 1.06 06/01/2012 ###
### gv9x ver 1.05 31/12/2011 ###
  * Add configuration of 'Mav system id'
  * Prepare for MAVLINK 1.0
### gv9x ver 1.04 23/11/2011 ###
  * _Update Mavlink parameters_ : THR\_HOLD become THR\_ALT, remove XTRACK.
  * _Add Mavlink parameters_ : LOW\_VOLT, IN\_VOLT, BATT\_MONITOR, BATT\_CAPACITY.
  * _Change menu_ : MAV PI become MAV PARAMS, it allow to change  other parameters than PID.
  * _Remove_ 'Mav batt warn'.
  * _Add battery warning_ from mavlink parameters LOW\_VOLT and BATT\_MONITOR.
### gv9x ver 1.03 24/09/2011 ###
  * Initial commit version with mavlink for Ardupilot mega.
### gv9x ver 1.00 ###
  * version update from er9x with software rolling switch.