######################################
# simpleMake Makefile
# Requires compiler only
######################################

#debug
#openocd -f "E:\github\stm32f769i-disco_projects\Blinker\usbDebug.cfg" -c "init; reset halt"
# C:/STM32/gcc-arm-none-eabi/bin/arm-none-eabi-gdb build/output.elf
#target ext:3333

#######################################
# paths
#######################################
# Build path
BUILD_DIR = build
PROJECT_BUILD_DIR = build/project
IFACE_BUILD_DIR = build/interface
HAL_BUILD_DIR = build/hal

PROJECT_DIR = .
IFACE_DIR = ../../Interfaces/Basic
A_CORE_REPO_DIR = ../../../Arduino_Core_STM32
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
# source
######################################
# C sources
#$(A_CORE_REPO_DIR)/cores/arduino/main.cpp
PROJECT_C_SOURCES = \
main.cpp

PROJECT_C_INCLUDES = 


IFACE_C_SOURCES = \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/analog.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/clock.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/core_callback.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/hw_config.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/interrupt.cpp \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/low_power.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/pinmap.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/PortNames.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/rtc.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/spi_com.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/stm32_def.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/stm32_eeprom.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/system_stm32yyxx.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/timer.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/twi.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/uart.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/usb_device_core.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/usb_device_ctlreq.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/usb_device_ioreq.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/usb_interface.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/usbd_hid_composite.c \
$(A_CORE_REPO_DIR)/cores/arduino/abi.cpp \
$(A_CORE_REPO_DIR)/cores/arduino/board.c \
$(A_CORE_REPO_DIR)/cores/arduino/HardwareSerial.cpp \
$(A_CORE_REPO_DIR)/cores/arduino/hooks.c \
$(A_CORE_REPO_DIR)/cores/arduino/IPAddress.cpp \
$(A_CORE_REPO_DIR)/cores/arduino/itoa.c \
$(A_CORE_REPO_DIR)/cores/arduino/new.cpp \
$(A_CORE_REPO_DIR)/cores/arduino/pins_arduino.c \
$(A_CORE_REPO_DIR)/cores/arduino/Print.cpp \
$(A_CORE_REPO_DIR)/cores/arduino/RingBuffer.cpp \
$(A_CORE_REPO_DIR)/cores/arduino/Stream.cpp \
$(A_CORE_REPO_DIR)/cores/arduino/syscalls.c \
$(A_CORE_REPO_DIR)/cores/arduino/Tone.cpp \
$(A_CORE_REPO_DIR)/cores/arduino/WInterrupts.cpp \
$(A_CORE_REPO_DIR)/cores/arduino/wiring_analog.c \
$(A_CORE_REPO_DIR)/cores/arduino/wiring_digital.c \
$(A_CORE_REPO_DIR)/cores/arduino/wiring_pulse.cpp \
$(A_CORE_REPO_DIR)/cores/arduino/wiring_shift.c \
$(A_CORE_REPO_DIR)/cores/arduino/wiring_time.c \
$(A_CORE_REPO_DIR)/cores/arduino/WMath.cpp \
$(A_CORE_REPO_DIR)/cores/arduino/WString.cpp\
$(A_CORE_REPO_DIR)/variants/DISCO_F769I/PeripheralPins.c \
$(A_CORE_REPO_DIR)/variants/DISCO_F769I/variant.cpp


#$(A_CORE_REPO_DIR)/system/STM32F7xx/system_stm32f7xx.c


IFACE_C_INCLUDES =


#$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_adc.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_adc_ex.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_can.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_cec.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_cortex.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_crc.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_crc_ex.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_cryp.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_cryp_ex.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_dac.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_dac_ex.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_dcmi.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_dcmi_ex.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_dfsdm.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_dma.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_dma_ex.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_dma2d.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_dsi.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_eth.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_flash.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_flash_ex.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_gpio.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_hash.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_hash_ex.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_hcd.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_i2c.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_i2c_ex.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_i2s.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_irda.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_iwdg.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_jpeg.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_lptim.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_ltdc.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_ltdc_ex.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_mdios.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_mmc.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_msp_template.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_nand.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_nor.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_pcd.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_pcd_ex.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_pwr.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_pwr_ex.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_qspi.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_rcc.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_rcc_ex.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_rng.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_rtc.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_rtc_ex.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_sai.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_sai_ex.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_sd.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_sdram.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_smartcard.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_smartcard_ex.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_smbus.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_spdifrx.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_spi.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_sram.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_tim.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_tim_ex.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_timebase_rtc_alarm_template.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_timebase_rtc_wakeup_template.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_timebase_tim_template.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_uart.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_usart.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_wwdg.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_ll_adc.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_ll_crc.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_ll_dac.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_ll_dma.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_ll_dma2d.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_ll_exti.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_ll_fmc.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_ll_gpio.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_ll_i2c.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_ll_lptim.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_ll_pwr.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_ll_rcc.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_ll_rng.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_ll_rtc.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_ll_sdmmc.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_ll_spi.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_ll_tim.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_ll_usart.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_ll_usb.c \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_ll_utils.c
HAL_C_SOURCES = \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_adc.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_adc_ex.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_can.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_cec.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_comp.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_comp_ex.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_cortex.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_crc.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_crc_ex.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_cryp.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_cryp_ex.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_dac.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_dac_ex.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_dcmi.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_dcmi_ex.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_dfsdm.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_dfsdm_ex.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_dma.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_dma_ex.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_dma2d.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_dsi.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_eth.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_exti.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_firewall.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_flash.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_flash_ex.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_flash_ramfunc.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_fmpi2c.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_fmpi2c_ex.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_gfxmmu.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_gpio.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_gpio_ex.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_hash.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_hash_ex.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_hcd.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_hrtim.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_i2c.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_i2c_ex.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_i2s.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_i2s_ex.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_irda.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_iwdg.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_jpeg.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_lcd.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_lptim.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_ltdc.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_ltdc_ex.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_mdios.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_mmc.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_msp_template.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_nand.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_nor.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_opamp.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_opamp_ex.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_ospi.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_pccard.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_pcd.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_pcd_ex.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_pwr.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_pwr_ex.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_qspi.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_rcc.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_rcc_ex.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_rng.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_rtc.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_rtc_ex.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_sai.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_sai_ex.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_sd.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_sd_ex.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_sdadc.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_sdram.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_smartcard.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_smartcard_ex.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_smbus.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_spdifrx.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_spi.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_spi_ex.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_sram.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_swpmi.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_tim.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_tim_ex.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_timebase_rtc_alarm_template.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_timebase_rtc_wakeup_template.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_timebase_tim_template.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_tsc.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_uart.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_uart_ex.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_usart.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_usart_ex.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL/stm32yyxx_hal_wwdg.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_adc.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_comp.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_crc.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_crs.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_dac.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_dma.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_dma2d.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_exti.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_fmc.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_fsmc.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_gpio.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_hrtim.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_i2c.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_lptim.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_lpuart.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_opamp.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_pwr.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_rcc.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_rng.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_rtc.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_sdmmc.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_spi.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_swpmi.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_tim.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_usart.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_usb.c \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/LL/stm32yyxx_ll_utils.c


HAL_C_INCLUDES =


HAL_ASM_SOURCES = \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/startup_stm32yyxx.S \
$(A_CORE_REPO_DIR)/system/Drivers/CMSIS/Device/ST/STM32F7xx/Source/Templates/gcc/startup_stm32f769xx.s


# C sources
C_SOURCES = $(PROJECT_C_SOURCES) $(IFACE_C_SOURCES) $(HAL_C_SOURCES)

# C includes
#C_INCLUDES = $(PROJECT_C_INCLUDES) $(IFACE_C_INCLUDES) $(HAL_C_INCLUDES)
C_INCLUDES = \
$(A_CORE_REPO_DIR)/cores/arduino \
$(A_CORE_REPO_DIR)/cores/arduino/stm32 \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/LL \
$(A_CORE_REPO_DIR)/cores/arduino/stm32/HAL \
$(A_CORE_REPO_DIR)/variants/DISCO_F769I \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Inc \
$(A_CORE_REPO_DIR)/system/Drivers/STM32F7xx_HAL_Driver/Src \
$(A_CORE_REPO_DIR)/system/Drivers/CMSIS/Device/ST/STM32F7xx/Include \
$(A_CORE_REPO_DIR)/system/STM32F7xx \
../../HAL/FW_F7_V1.12.0/CMSIS/Include

# AS includes
AS_INCLUDES = \
$(A_CORE_REPO_DIR)/system/Drivers/CMSIS/Device/ST/STM32F7xx/Source/Templates/gcc


# Linker Script
LINKER_FILE = $(A_CORE_REPO_DIR)/variants/DISCO_F769I/STM32F769NIHx_FLASH.ld
 
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

# list of project objects
PROJECT_OBJECTS = $(addprefix $(PROJECT_BUILD_DIR)/,$(patsubst %s,%o,$(patsubst %c,%o,$(patsubst %cpp,%o,$(notdir $(PROJECT_C_SOURCES))))))
vpath %.c $(sort $(dir $(PROJECT_C_SOURCES)))
vpath %.cpp $(sort $(dir $(PROJECT_C_SOURCES)))
# list of iface objects
IFACE_OBJECTS = $(addprefix $(IFACE_BUILD_DIR)/,$(patsubst %s,%o,$(patsubst %c,%o,$(patsubst %cpp,%o,$(notdir $(IFACE_C_SOURCES))))))
vpath %.c $(sort $(dir $(IFACE_C_SOURCES)))
vpath %.cpp $(sort $(dir $(IFACE_C_SOURCES)))
# list of hal objects
HAL_OBJECTS = $(addprefix $(HAL_BUILD_DIR)/,$(patsubst %s,%o,$(patsubst %c,%o,$(patsubst %cpp,%o,$(notdir $(HAL_C_SOURCES))))))
HAL_OBJECTS += $(addprefix $(HAL_BUILD_DIR)/,$(patsubst %S,%o,$(patsubst %s,%o,$(notdir $(HAL_ASM_SOURCES)))))
vpath %.c $(sort $(dir $(HAL_C_SOURCES)))
vpath %.cpp $(sort $(dir $(HAL_C_SOURCES)))
vpath %.S $(sort $(dir $(HAL_ASM_SOURCES)))
vpath %.s $(sort $(dir $(HAL_ASM_SOURCES)))
# list of all objects
OBJECTS = $(IFACE_OBJECTS) $(HAL_OBJECTS) $(PROJECT_OBJECTS)


# project src files
$(PROJECT_BUILD_DIR)/%.o: %.cpp
	@echo "***** ***** ***** input = $^, output = $@***** ***** *****"
	$(PP) $(CPPFLAGS) $(addprefix -I,$(C_INCLUDES)) $< -o $@
	@echo
	@echo

$(PROJECT_BUILD_DIR)/%.o: %.c
	@echo "***** ***** ***** input = $^, output = $@***** ***** *****"
	$(CC) $(CFLAGS) $(addprefix -I,$(C_INCLUDES)) $< -o $@
	@echo
	@echo
	
# iface src files
$(IFACE_BUILD_DIR)/%.o: %.cpp
	@echo "***** ***** ***** input = $^, output = $@***** ***** *****"
	$(PP) $(CPPFLAGS) $(addprefix -I,$(C_INCLUDES)) $< -o $@
	@echo
	@echo
	
$(IFACE_BUILD_DIR)/%.o: %.c
	@echo "***** ***** ***** input = $^, output = $@***** ***** *****"
	$(CC) $(CFLAGS) $(addprefix -I,$(C_INCLUDES)) $< -o $@
	@echo
	@echo
	
# hal src files
$(HAL_BUILD_DIR)/%.o: %.cpp
	@echo "***** ***** ***** input = $^, output = $@***** ***** *****"
	$(PP) $(CPPFLAGS) $(addprefix -I,$(C_INCLUDES)) $< -o $@
	@echo
	@echo
	
$(HAL_BUILD_DIR)/%.o: %.c
	@echo "***** ***** ***** input = $^, output = $@***** ***** *****"
	$(CC) $(CFLAGS) $(addprefix -I,$(C_INCLUDES)) $< -o $@
	@echo
	@echo

$(HAL_BUILD_DIR)/%.o: %.s
	@echo "***** ***** ***** input = $^, output = $@***** ***** *****"
	$(AS) $(ASFLAGS) $(addprefix -I,$(AS_INCLUDES)) $< -o $@
	@echo
	@echo

$(HAL_BUILD_DIR)/%.o: %.S
	@echo "***** ***** ***** input = $^, output = $@***** ***** *****"
	$(AS) $(ASFLAGS) $(addprefix -I,$(AS_INCLUDES)) $< -o $@
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
	mkdir -p $(BUILD_DIR)
	mkdir -p $(PROJECT_BUILD_DIR)
	mkdir -p $(IFACE_BUILD_DIR)
	mkdir -p $(HAL_BUILD_DIR)

info:
	$(info ************  Info ************)
	@echo info PROJECT_C_SOURCES: 
	@echo $(PROJECT_C_SOURCES)
	@echo
	@echo info IFACE_C_SOURCES: 
	@echo $(IFACE_C_SOURCES)
	@echo
	@echo info HAL_C_SOURCES: 
	@echo $(HAL_C_SOURCES)
	@echo
	@echo info C_SOURCES: 
	@echo $(C_SOURCES)
	@echo
	@echo info HAL_ASM_SOURCES: 
	@echo $(HAL_ASM_SOURCES)
	@echo
	@echo info PROJECT_OBJECTS: 
	@echo $(PROJECT_OBJECTS)
	@echo
	@echo info IFACE_OBJECTS: 
	@echo $(IFACE_OBJECTS)
	@echo
	@echo info HAL_OBJECTS: 
	@echo $(HAL_OBJECTS)
	@echo
	@echo info OBJECTS: 
	@echo $(OBJECTS)
	@echo
	@echo info C_INCLUDES: 
	@echo $(C_INCLUDES)
	@echo
	@echo info AS_INCLUDES: 
	@echo $(AS_INCLUDES)
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