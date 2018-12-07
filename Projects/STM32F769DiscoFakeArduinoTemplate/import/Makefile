######################################
# simpleMake Makefile
# Requires compiler only
######################################

#debug
#openocd -f "E:\github\stm32f769i-disco_projects\Blinker\usbDebug.cfg" -c "init; reset halt"
# C:/STM32/gcc-arm-none-eabi/bin/arm-none-eabi-gdb build/output.elf
#target ext:3333

#######################################
# General paths
#######################################
# Build path
BUILD_DIR = build
PROJECT_BUILD_DIR = build/project
IFACE_BUILD_DIR = build/interface
HAL_BUILD_DIR = build/hal

PROJECT_DIR = .
#IFACE_DIR = ../../Interfaces/Basic
ARDUINO_REPO_DIR = ../../../Arduino_Core_STM32
LIBRARY_DIR = ../ArduinoLib
TARGET_EXEC = $(BUILD_DIR)/output.elf
# Tools
#GCC_PATH = /cygdrive/c/STM32/gcc-arm-none-eabi/bin
GCC_PATH = C:/STM32/gcc-arm-none-eabi/bin
CC = $(GCC_PATH)/arm-none-eabi-gcc
PP = $(GCC_PATH)/arm-none-eabi-g++
AS = $(GCC_PATH)/arm-none-eabi-as
CP = $(GCC_PATH)/arm-none-eabi-objcopy
SZ = $(GCC_PATH)/arm-none-eabi-size

######################################
# srcs/incs -- Assembly
######################################

CMSIS_SOURCES = \
$(ARDUINO_REPO_DIR)/system/Drivers/CMSIS/Device/ST/STM32F7xx/Source/Templates/gcc/startup_stm32f769xx.s \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/startup_stm32yyxx.S

CMSIS_INCLUDES = \
$(ARDUINO_REPO_DIR)/system/Drivers/CMSIS/Device/ST/STM32F7xx/Source/Templates/gcc

#$(ARDUINO_REPO_DIR)/system/Drivers/CMSIS/Device/ST/STM32F7xx/Include \


######################################
# srcs/incs -- Project
######################################
#$(ARDUINO_REPO_DIR)/cores/arduino/main.cpp
#sketch.cpp \

PROJECT_C_SOURCES = \
main.cpp

PROJECT_C_INCLUDES = \
. \
Inc

######################################
# srcs/incs -- Libraries
######################################
ARDUINO_LIB_C_SOURCES = \
$(LIBRARY_DIR)/uCModules/src/flagMessaging.cpp \
$(LIBRARY_DIR)/uCModules/src/HardwareInterfaces.cpp \
$(LIBRARY_DIR)/uCModules/src/Panel.cpp \
$(LIBRARY_DIR)/uCModules/src/PanelComponents.cpp \
$(LIBRARY_DIR)/uCModules/src/PanelDataObjects.cpp \
$(LIBRARY_DIR)/uCModules/src/timeKeeper.cpp \
$(LIBRARY_DIR)/uCModules/src/timeKeeper32.cpp \
$(LIBRARY_DIR)/uCModules/src/timerModule.cpp \
$(LIBRARY_DIR)/uCModules/src/timerModule32.cpp

ARDUINO_LIB_INCLUDES = \
$(LIBRARY_DIR)/uCModules/src

######################################
# srcs/incs -- Arduino
######################################
ARDUINO_CORE_C_SOURCES = \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/analog.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/clock.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/core_callback.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/hw_config.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/interrupt.cpp \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/low_power.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/pinmap.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/PortNames.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/rtc.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/spi_com.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/stm32_def.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/stm32_eeprom.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/system_stm32yyxx.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/timer.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/twi.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/uart.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/usb_device_core.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/usb_device_ctlreq.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/usb_device_ioreq.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/usb_interface.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/usbd_hid_composite.c \
$(ARDUINO_REPO_DIR)/cores/arduino/abi.cpp \
$(ARDUINO_REPO_DIR)/cores/arduino/board.c \
$(ARDUINO_REPO_DIR)/cores/arduino/HardwareSerial.cpp \
$(ARDUINO_REPO_DIR)/cores/arduino/hooks.c \
$(ARDUINO_REPO_DIR)/cores/arduino/IPAddress.cpp \
$(ARDUINO_REPO_DIR)/cores/arduino/itoa.c \
$(ARDUINO_REPO_DIR)/cores/arduino/new.cpp \
$(ARDUINO_REPO_DIR)/cores/arduino/pins_arduino.c \
$(ARDUINO_REPO_DIR)/cores/arduino/Print.cpp \
$(ARDUINO_REPO_DIR)/cores/arduino/RingBuffer.cpp \
$(ARDUINO_REPO_DIR)/cores/arduino/Stream.cpp \
$(ARDUINO_REPO_DIR)/cores/arduino/syscalls.c \
$(ARDUINO_REPO_DIR)/cores/arduino/Tone.cpp \
$(ARDUINO_REPO_DIR)/cores/arduino/WInterrupts.cpp \
$(ARDUINO_REPO_DIR)/cores/arduino/wiring_analog.c \
$(ARDUINO_REPO_DIR)/cores/arduino/wiring_digital.c \
$(ARDUINO_REPO_DIR)/cores/arduino/wiring_pulse.cpp \
$(ARDUINO_REPO_DIR)/cores/arduino/wiring_shift.c \
$(ARDUINO_REPO_DIR)/cores/arduino/wiring_time.c \
$(ARDUINO_REPO_DIR)/cores/arduino/WMath.cpp \
$(ARDUINO_REPO_DIR)/cores/arduino/WString.cpp\
$(ARDUINO_REPO_DIR)/variants/DISCO_F769I/PeripheralPins.c \
$(ARDUINO_REPO_DIR)/variants/DISCO_F769I/variant.cpp

ARDUINO_CORE_INCLUDES = \
$(ARDUINO_REPO_DIR)/cores/arduino \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32 \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/LL \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL \
$(ARDUINO_REPO_DIR)/variants/DISCO_F769I \
$(ARDUINO_REPO_DIR)/system/Drivers/CMSIS/Device/ST/STM32F7xx/Include \
../../HAL/FW_F7_V1.12.0/CMSIS/Include \
$(ARDUINO_REPO_DIR)/system/STM32F7xx 

######################################
# srcs/incs -- HAL
######################################
HAL_C_SOURCES = \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_adc.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_adc_ex.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_can.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_cec.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_comp.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_comp_ex.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_cortex.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_crc.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_crc_ex.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_cryp.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_cryp_ex.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_dac.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_dac_ex.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_dcmi.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_dcmi_ex.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_dfsdm.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_dfsdm_ex.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_dma.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_dma_ex.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_dma2d.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_dsi.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_eth.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_exti.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_firewall.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_flash.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_flash_ex.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_flash_ramfunc.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_fmpi2c.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_fmpi2c_ex.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_gfxmmu.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_gpio.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_gpio_ex.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_hash.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_hash_ex.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_hcd.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_hrtim.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_i2c.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_i2c_ex.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_i2s.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_i2s_ex.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_irda.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_iwdg.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_jpeg.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_lcd.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_lptim.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_ltdc.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_ltdc_ex.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_mdios.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_mmc.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_msp_template.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_nand.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_nor.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_opamp.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_opamp_ex.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_ospi.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_pccard.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_pcd.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_pcd_ex.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_pwr.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_pwr_ex.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_qspi.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_rcc.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_rcc_ex.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_rng.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_rtc.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_rtc_ex.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_sai.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_sai_ex.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_sd.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_sd_ex.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_sdadc.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_sdram.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_smartcard.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_smartcard_ex.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_smbus.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_spdifrx.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_spi.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_spi_ex.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_sram.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_swpmi.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_tim.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_tim_ex.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_timebase_rtc_alarm_template.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_timebase_rtc_wakeup_template.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_timebase_tim_template.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_tsc.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_uart.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_uart_ex.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_usart.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_usart_ex.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_wwdg.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_adc.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_comp.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_crc.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_crs.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_dac.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_dma.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_dma2d.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_exti.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_fmc.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_fsmc.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_gpio.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_hrtim.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_i2c.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_lptim.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_lpuart.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_opamp.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_pwr.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_rcc.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_rng.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_rtc.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_sdmmc.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_spi.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_swpmi.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_tim.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_usart.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_usb.c \
$(ARDUINO_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_utils.c


#$(ARDUINO_REPO_DIR)/cores/arduino/stm32/LL
#$(ARDUINO_REPO_DIR)/cores/arduino/stm32/HAL

HAL_C_INCLUDES = \
$(ARDUINO_REPO_DIR)/variants/DISCO_F769I \
$(ARDUINO_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Inc \
$(ARDUINO_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src \
$(ARDUINO_REPO_DIR)/system/Drivers/CMSIS/Device/ST/STM32F7xx/Include \
../../HAL/FW_F7_V1.12.0/CMSIS/Include \
$(ARDUINO_REPO_DIR)/system/STM32F7xx 

#######################################
# Sub-objects
#######################################
#names:
#CMSIS_SOURCES
#CMSIS_INCLUDES
#PROJECT_C_SOURCES
#PROJECT_C_INCLUDES
#ARDUINO_LIB_C_SOURCES
#ARDUINO_LIB_INCLUDES
#ARDUINO_CORE_C_SOURCES
#ARDUINO_CORE_INCLUDES
#HAL_C_SOURCES
#HAL_C_INCLUDES

#$(ARDUINO_LIB_C_SOURCES) \


# C sources
C_SOURCES = \
$(CMSIS_SOURCES) \
$(PROJECT_C_SOURCES) \
$(ARDUINO_CORE_C_SOURCES) \
$(HAL_C_SOURCES)

# C includes
C_INCLUDES = \
$(CMSIS_INCLUDES) \
$(PROJECT_C_INCLUDES) \
$(ARDUINO_LIB_INCLUDES) \
$(ARDUINO_CORE_INCLUDES) \
$(HAL_C_INCLUDES)

# AS includes
#AS_INCLUDES = \
#$(CMSIS_INCLUDES)


# Linker Script
LINKER_FILE = $(ARDUINO_REPO_DIR)/variants/DISCO_F769I/STM32F769NIHx_FLASH.ld
 
#######################################
# FLAGS
#######################################
# c
#  -DUSE_HAL_DRIVER -DSTM32F7xx 
CFLAGS = -v -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-d16 -DSTM32F7xx '-D__weak=__attribute__((weak))' '-D__packed=__attribute__((__packed__))' -DSTM32F769xx -Og -g3 -Wall -fmessage-length=0 -ffunction-sections -c -fmessage-length=0

# Generate dependency information
CFLAGS += -MMD -MP -MF"$(@:%.o=%.d)"

# cpp
CPPFLAGS = $(CFLAGS) -std=c++11

# Message behavior
# -Werror -fsyntax-only -fmax-errors=1 -w
CFLAGS += -Werror -fmax-errors=1

# assembler
ASFLAGS = -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-d16 -g

# linker
LDFLAGS = -v -g -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-d16 -specs=nosys.specs -specs=nano.specs -T$(LINKER_FILE) -Wl,-Map=$(BUILD_DIR)/output.map -Wl,--gc-sections -lm

# binaries
HEX = $(CP) -O ihex
BIN = $(CP) -O binary -S


#######################################
# build the application
#######################################
# default action: build all
all: make_directories $(TARGET_EXEC) $(BUILD_DIR)/output.hex $(BUILD_DIR)/output.bin

#CMSIS_OBJECTS
CMSIS_OBJECTS = $(addprefix $(BUILD_DIR)/CMSIS/,$(patsubst %S,%o,$(patsubst %s,%o,$(patsubst %c,%o,$(notdir $(CMSIS_SOURCES))))))
vpath %.c $(sort $(dir $(CMSIS_SOURCES)))
vpath %.S $(sort $(dir $(CMSIS_SOURCES)))
vpath %.s $(sort $(dir $(CMSIS_SOURCES)))

#PROJECT_OBJECTS
PROJECT_OBJECTS = $(addprefix $(BUILD_DIR)/PROJECT/,$(patsubst %s,%o,$(patsubst %c,%o,$(patsubst %cpp,%o,$(notdir $(PROJECT_C_SOURCES))))))
vpath %.c $(sort $(dir $(PROJECT_C_SOURCES)))
vpath %.cpp $(sort $(dir $(PROJECT_C_SOURCES)))
vpath %.s $(sort $(dir $(PROJECT_C_SOURCES)))

#ARDUINO_LIB_OBJECTS
#ARDUINO_LIB_OBJECTS = $(addprefix $(BUILD_DIR)/ARDUINO_LIB/,$(patsubst %c,%o,$(patsubst %cpp,%o,$(notdir $(ARDUINO_LIB_C_SOURCES)))))
#vpath %.c $(sort $(dir $(ARDUINO_LIB_C_SOURCES)))
#vpath %.cpp $(sort $(dir $(ARDUINO_LIB_C_SOURCES)))

#ARDUINO_CORE_C_OBJECTS
ARDUINO_CORE_OBJECTS = $(addprefix $(BUILD_DIR)/ARDUINO_CORE/,$(patsubst %c,%o,$(patsubst %cpp,%o,$(notdir $(ARDUINO_CORE_C_SOURCES)))))
vpath %.c $(sort $(dir $(ARDUINO_CORE_C_SOURCES)))
vpath %.cpp $(sort $(dir $(ARDUINO_CORE_C_SOURCES)))

#HAL_C_OBJECTS
HAL_OBJECTS = $(addprefix $(BUILD_DIR)/HAL/,$(patsubst %c,%o,$(patsubst %cpp,%o,$(notdir $(HAL_C_SOURCES)))))
vpath %.c $(sort $(dir $(HAL_C_SOURCES)))
vpath %.cpp $(sort $(dir $(HAL_C_SOURCES)))

# list of all objects
OBJECTS = \
$(ARDUINO_CORE_OBJECTS) \
$(ARDUINO_LIB_OBJECTS) \
$(HAL_OBJECTS) \
$(CMSIS_OBJECTS) \
$(PROJECT_OBJECTS)


$(BUILD_DIR)/CMSIS/%.o: %.s
	@echo "***** ***** ***** input = $^, output = $@***** ***** *****"
	$(AS) $(ASFLAGS) $(addprefix -I,$(CMSIS_INCLUDES)) $(addprefix -I,$(C_INCLUDES)) $< -o $@
	@echo
	@echo

$(BUILD_DIR)/CMSIS/%.o: %.S
	@echo "***** ***** ***** input = $^, output = $@***** ***** *****"
	$(AS) $(ASFLAGS) $(addprefix -I,$(CMSIS_INCLUDES)) $(addprefix -I,$(C_INCLUDES)) $< -o $@
	@echo
	@echo

$(BUILD_DIR)/PROJECT/%.o: %.cpp
	@echo "***** ***** ***** input = $^, output = $@***** ***** *****"
	$(PP) $(CPPFLAGS) $(addprefix -I,$(C_INCLUDES)) $< -o $@
	@echo
	@echo

$(BUILD_DIR)/PROJECT/%.o: %.c
	@echo "***** ***** ***** input = $^, output = $@***** ***** *****"
	$(CC) $(CFLAGS) $(addprefix -I,$(C_INCLUDES))  $< -o $@
	@echo
	@echo

$(BUILD_DIR)/ARDUINO_LIB/%.o: %.cpp
	@echo "***** ***** ***** input = $^, output = $@***** ***** *****"
	$(PP) $(CPPFLAGS) $(addprefix -I,$(C_INCLUDES)) $< -o $@
	@echo
	@echo

$(BUILD_DIR)/ARDUINO_LIB/%.o: %.c
	@echo "***** ***** ***** input = $^, output = $@***** ***** *****"
	$(CC) $(CFLAGS) $(addprefix -I,$(C_INCLUDES)) $< -o $@
	@echo
	@echo
	
$(BUILD_DIR)/ARDUINO_CORE/%.o: %.cpp
	@echo "***** ***** ***** input = $^, output = $@***** ***** *****"
	$(PP) $(CPPFLAGS) $(addprefix -I,$(C_INCLUDES)) $< -o $@
	@echo
	@echo
	
$(BUILD_DIR)/ARDUINO_CORE/%.o: %.c
	@echo "***** ***** ***** input = $^, output = $@***** ***** *****"
	$(CC) $(CFLAGS) $(addprefix -I,$(C_INCLUDES)) $< -o $@
	@echo
	@echo
	
$(BUILD_DIR)/HAL/%.o: %.cpp
	@echo "***** ***** ***** input = $^, output = $@***** ***** *****"
	$(PP) $(CPPFLAGS) $(addprefix -I,$(C_INCLUDES)) $< -o $@
	@echo
	@echo
	
$(BUILD_DIR)/HAL/%.o: %.c
	@echo "***** ***** ***** input = $^, output = $@***** ***** *****"
	$(CC) $(CFLAGS) $(addprefix -I,$(C_INCLUDES)) $< -o $@
	@echo
	@echo

# linker
$(BUILD_DIR)/output.elf: $(OBJECTS) Makefile
	$(PP) $(LDFLAGS) $(OBJECTS) -o $(TARGET_EXEC)
	$(SZ) $@
	@echo
	@echo

$(BUILD_DIR)/output.hex: $(TARGET_EXEC)
	$(HEX) $< $@
	
$(BUILD_DIR)/output.bin: $(TARGET_EXEC)
	$(BIN) $< $@	

.PHONY: make_directories

make_directories:
	mkdir -p $(BUILD_DIR)/CMSIS
	mkdir -p $(BUILD_DIR)/PROJECT
	mkdir -p $(BUILD_DIR)/ARDUINO_LIB
	mkdir -p $(BUILD_DIR)/ARDUINO_CORE
	mkdir -p $(BUILD_DIR)/HAL

info:
	@echo "***** ***** ***** CMSIS ***** ***** *****"
	@echo CMSIS_OBJECTS
	@echo $(CMSIS_OBJECTS)
	@echo
	@echo CMSIS_INCLUDES
	@echo $(CMSIS_INCLUDES)
	@echo
	@echo "***** ***** ***** PROJECT ***** ***** *****"
#	@echo PROJECT_C_SOURCES
#	@echo $(PROJECT_C_SOURCES)
#	@echo
	@echo PROJECT_OBJECTS
	@echo $(PROJECT_OBJECTS)
	@echo
	@echo PROJECT_C_INCLUDES
	@echo $(PROJECT_C_INCLUDES)
	@echo
	@echo "***** ***** ***** ARDUINO_LIB ***** ***** *****"
	@echo ARDUINO_LIB_OBJECTS
	@echo $(ARDUINO_LIB_OBJECTS)
	@echo
	@echo ARDUINO_LIB_INCLUDES
	@echo $(ARDUINO_LIB_INCLUDES)
	@echo
	@echo "***** ***** ***** ARDUINO_CORE ***** ***** *****"
	@echo ARDUINO_CORE_OBJECTS
	@echo $(ARDUINO_CORE_OBJECTS)
	@echo
	@echo ARDUINO_CORE_INCLUDES
	@echo $(ARDUINO_CORE_INCLUDES)
	@echo
	@echo "***** ***** ***** HAL ***** ***** *****"
	@echo HAL_OBJECTS
	@echo $(HAL_OBJECTS)
	@echo
	@echo HAL_C_INCLUDES
	@echo $(HAL_C_INCLUDES)
	@echo
	@echo OBJECTS
	@echo $(OBJECTS)
	@echo	
	
	
	

#######################################
# clean up
#######################################
clean:
	-rm -fR $(BUILD_DIR)
  
#######################################
# dependencies
#######################################
-include $(wildcard $(BUILD_DIR)/*.d)

#debug
# openocd -f "E:\github\stm32f769i-disco_projects\usbDebugTemplate\AudioTemplate Debug.cfg"
# C:/STM32/gcc-arm-none-eabi/bin/arm-none-eabi-gdb build/output.elf

# *** EOF ***