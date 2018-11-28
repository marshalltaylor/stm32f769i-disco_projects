######################################
# Compile HAL code only
######################################


#######################################
# paths
#######################################
# Build path
BUILD_DIR = build

# Tools
#GCC_PATH = /cygdrive/c/STM32/gcc-arm-none-eabi/bin
GCC_PATH = C:/STM32/gcc-arm-none-eabi/bin
CC = $(GCC_PATH)/arm-none-eabi-g++
AS = $(GCC_PATH)/arm-none-eabi-as
CP = $(GCC_PATH)/arm-none-eabi-objcopy
SZ = $(GCC_PATH)/arm-none-eabi-size

######################################
# source
######################################
# C sources
C_SOURCES = \
src/configuration.c \
src/system_stm32f7xx.c \
src/stm32f7xx_it.c \
src/stm32f7xx_hal_msp.c \
src/stm32f7xx_hal_timebase_TIM.c \
FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_pcd.c \
FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_pcd_ex.c \
FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Src/stm32f7xx_ll_usb.c \
FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_cortex.c \
FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_dfsdm.c \
FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_i2c.c \
FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_i2c_ex.c \
FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_sai.c \
FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_sai_ex.c \
FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Src/stm32f7xx_ll_sdmmc.c \
FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_mmc.c \
FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_tim.c \
FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_tim_ex.c \
FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_rcc.c \
FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_rcc_ex.c \
FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_flash.c \
FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_flash_ex.c \
FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_gpio.c \
FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_dma.c \
FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_dma_ex.c \
FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_pwr.c \
FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_pwr_ex.c \
FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal.c \
USB_DEVICE/App/usb_device.c \
USB_DEVICE/App/usbd_desc.c \
USB_DEVICE/App/usbd_cdc_if.c \
USB_DEVICE/Target/usbd_conf.c \
Middlewares/ST/STM32_USB_Device_Library/Core/Src/usbd_core.c \
Middlewares/ST/STM32_USB_Device_Library/Core/Src/usbd_ctlreq.c \
Middlewares/ST/STM32_USB_Device_Library/Core/Src/usbd_ioreq.c \
Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Src/usbd_cdc.c 

# C includes
C_INCLUDES = \
FW_F7_V1.12.0/CMSIS/Include \
FW_F7_V1.12.0/CMSIS/Device/ST/STM32F7xx/Include \
FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Inc \
FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Inc/Legacy \
include \
USB_DEVICE/App \
USB_DEVICE/Target \
Middlewares/ST/STM32_USB_Device_Library/Core/Inc \
Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc


#######################################
# FLAGS
#######################################
# c
CFLAGS = -v -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-d16 '-D__weak=__attribute__((weak))' '-D__packed=__attribute__((__packed__))' -DUSE_HAL_DRIVER -std=c++11 -DSTM32F769xx -Og -g3 -Wall -fmessage-length=0 -ffunction-sections -c -fmessage-length=0

# Generate dependency information
CFLAGS += -MMD -MP -MF"$(@:%.o=%.d)"

# assembler
ASFLAGS = -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-d16 -g

# linker
LDFLAGS = -v -g -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-d16 -specs=nosys.specs -specs=nano.specs -T$(LINKER_FILE) -Wl,-Map=$(BUILD_DIR)/output.map -Wl,--gc-sections -lm


#######################################
# build the application
#######################################
# list of objects
OBJECTS = $(addprefix $(BUILD_DIR)/,$(patsubst %s,%o,$(patsubst %c,%o,$(patsubst %cpp,%o,$(notdir $(C_SOURCES))))))
vpath %.c $(sort $(dir $(C_SOURCES)))
vpath %.cpp $(sort $(dir $(C_SOURCES)))
vpath %.s $(sort $(dir $(C_SOURCES)))
OBJECTS += $(ASM_SOURCES:%.s=$(BUILD_DIR)/%.o)

# default action: build all
all: make_directories $(OBJECTS) Makefile

# src files
$(BUILD_DIR)/%.o: %.cpp
	@echo "***** ***** ***** output = $^, input = $@***** ***** *****"
	$(CC) $(CFLAGS) $(addprefix -I,$(C_INCLUDES)) $< -o $@
	@echo
	@echo
	
$(BUILD_DIR)/%.o: %.c
	@echo "***** ***** ***** output = $^, input = $@***** ***** *****"
	$(CC) $(CFLAGS) $(addprefix -I,$(C_INCLUDES)) $< -o $@
	@echo
	@echo

$(BUILD_DIR)/%.o: %.s
	@echo "***** ***** ***** output = $^, input = $@***** ***** *****"
	$(AS) $(ASFLAGS) $< -o $@
	@echo
	@echo

.PHONY: make_directories

make_directories:
	mkdir -p $(BUILD_DIR)


#######################################
# clean up
#######################################
clean:
	-rm -fR $(BUILD_DIR)
  
#######################################
# dependencies
#######################################
-include $(wildcard $(BUILD_DIR)/*.d)

# *** EOF ***