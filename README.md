
# stm32f769i-disco_projects

## Goal
Create minimized set of Arduino files for importing to an otherwise generic Makefile project and contribute a (somewhat tested) variant directory to the parent repository, examining interface to HAL for educational purposes.

## Contents
This is really an experimentation zone but there are a few gems.

* examples

Directory contains examples that can be built from contained (HAL,CMSIS...) sources plus arm-gcc standard libraries.  Some have simple Makefiles and some have text files with a series of notes and commands to show compiling process.

* Projects/Blinker

Simple Makefile application built of remote HAL,CMSIS etc. platform files.  Platform located in `/HAL`.

* Projects/ArduinoCore

Compiles blink with external Arduino_Core_STM32.  This must be specified in the Makefile.  Core comes from [https://github.com/stm32duino/Arduino_Core_STM32](https://github.com/stm32duino/Arduino_Core_STM32) and has STM32F769 specific variant files tracked in the fork, [https://github.com/marshalltaylor/Arduino_Core_STM32](https://github.com/marshalltaylor/Arduino_Core_STM32)
Note:  The cmsis file isn't provided in the repository, so a local one is referenced.

* Projects/ButtonBlinker
* Projects/KnobDemo

Two examples from the uCModules library.  This library is slightly modified and held in this repo in `Projects/ArduinoLib`

## Usage Notes
Rudimentary Debugging Information --

Run openocd and load a configuration file in.  This files gives debugger config to st-link.
`openocd -f "E:\github\stm32f769i-disco_projects\examples\Blinker\usbDebug.cfg" -c "init; reset halt"`

Run gdb and give it the elf file for symbols
`C:/STM32/gcc-arm-none-eabi/bin/arm-none-eabi-gdb build/output.elf`

This will give you a terminal.  First connect to openocd with `target ext:3333` command.  Then, you can do things to the target.  I found some common commands are not found with this version of gdb.  Here are some leads:

*TODO: Fill out placeholder list!*
* `load` -- Write image to target
* `break`
* `continue`
