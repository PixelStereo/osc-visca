# OSC-visca
---
## Command your Visca device through an ARDUINO over OSC

OSC-visca allows you to command your Visca device with open sound control messages.

The OSC-Visca project converts OSC messages to serial commands.
It's running on an arduino (Arduino Ethernet or Arduino Uno with Ethernet Shield) connected to a local network and a TTL to serial converter connected to the Visca compliant camera.

We provide layouts with all OSC messages for different platforms : 
*	an OSX application, to run on a computer. (done)
*	a Windows executable, to run on a computer. (done)
*	a Max 6 patch, you can run it both on windows and osx. (done)
*	a pure-data patch, you can run it both on linux, windows and osx. (not even started)
*	a Lemur patch on your iPad (work in progress)
*	a touchOSC patch on your iPad (work in progress)

 
## Change Log
### Version 0.3 (future)
* *introduce the visca library
* *handle answers from the camera

### Version 0.2 (current)
* *v0.2 is based on the CNMAT library - mid 2014*
* *https://github.com/CNMAT/OSC*

### Version 0.1 
* *v0.1 is based on ARDOSC library - later 2013*
* *https://github.com/recotana/ArdOSC*

## Limitations 
* *Messages coming from the camera are ignored. The full API will be done in the future releases*
* *Implementation is flat. An object oriented version is currently in development*

# Licence
http://www.gnu.org/licenses/gpl-3.0.en.html

## Credits
* *Written by Renaud Rubiano - 2012-2015*
* *Produced by Pixel Stereo*

| VISCA COMMAND | /osc/address | arguments |
| ------------- | ------------- | ----------- |
|CAM_Power |	/active | 0/1|
|CAM_AutoPowerOFF |		| |
|CAM_NightPowerOff		| | |
|CAM_Zoom Stop	/zoom/stop		| | |
|CAM_Zoom Tele(Standard)	| /zoom/tele	| 	-	| 
|CAM_Zoom Wide(Standard)	| 	/zoom/wide	| 	-|
|CAM_Zoom Tele(Variable)	| 	/zoom/tele/speed	| 	0-7|
|CAM_Zoom Wide(Variable)	| 	/zoom/wide/speed		| 0-7|
|CAM_Zoom Direct	| 	/zoom	| 	0-16384|
|CAM_Dzoom On	| 	/zoom/digital	| 	|
|CAM_Dzoom Off		| /zoom/digital	| 	0-1|
|CAM_Dzoom Combine Mode	| 	| 		|
|CAM_Dzoom Separate Mode	| 	| 		|
|CAM_Dzoom Stop	| 	| 		|
|CAM_Dzoom Tele(Variable)	| 	| 		|
|CAM_Dzoom Wide(Variable)			| 	| |
|CAM_Dzoom x1/Max		|	| 	| 
|CAM_Dzoom Direct		|	| 	| 
|CAM_Focus Stop		| /focus/stop	| 	-|
|CAM_Focus Far(Standart)		| /focus/far	|	| 
|CAM_Focus Near(Standart)		| /focus/near	|	| 
|CAM_Focus Far(Variable)		| /focus/far/speed	|	| 
|CAM_Focus Near(Variable)		| /focus/near/speed	|	| 
|CAM_Focus Direct		| /focus	|	| 
|CAM_Focus Auto Focus		| 	|	| 
|CAM_Focus Manual Focus		|	| 	| 
|CAM_Focus Auto/Manual	| 	/focus/mode	|	| 
|CAM_Focus One Push Trigger	| 	/focus/trig	|	| 
|CAM_Focus Infinity	| 	| 		|
|CAM_Focus Near Limit		| /focus/nearlimit	|	| 
|AF Sensitivity		| /focus/sensitivity		| Normal-low|
|CAM_AFMode Normal	| 	| 		|
|CAM_AFMode Interval		|	| 	| 
|CAM_AFMode Zoom Trigger		|	| 	| 
|CAM_AFMode Active/Interval Time		| 	| 	|
|CAM_ZoomFocus		|	| 	| 
|CAM_Initialize Lens		|	| 	| 
|CAM_Initialize Comp Scan		|	| 	| 
|CAM_WB Mode		| /WB/mode	| 	Auto-indoor-outdoor-onepush-ATW-manual|
|CAM_WB One Push Trigger	| 	/WB/trig	|	| 
