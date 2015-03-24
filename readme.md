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


