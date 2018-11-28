######################################
# simpleMake Makefile
# Requires compiler only
######################################


#######################################
# paths
#######################################
# Build path
BUILD_DIR = build

INCLUDE_DIR = include/
FATFS_DIR =


TARGET_EXEC = $(BUILD_DIR)/output.elf

# Tools
GCC_PATH = /cygdrive/c/STM32/gcc-arm-none-eabi/bin
CC = $(GCC_PATH)/arm-none-eabi-g++
AS = $(GCC_PATH)/arm-none-eabi-as
CP = $(GCC_PATH)/arm-none-eabi-objcopy
SZ = $(GCC_PATH)/arm-none-eabi-size

######################################
# source
######################################
# C sources
C_SOURCES = \
src/fakeLib.cpp \
src/main.cpp \
src/system_stm32f7xx.c \
src/freertos.c \
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
FATFS/App/fatfs.c \
FATFS/Target/user_diskio.c \
USB_DEVICE/App/usb_device.c \
USB_DEVICE/App/usbd_desc.c \
USB_DEVICE/App/usbd_cdc_if.c \
USB_DEVICE/Target/usbd_conf.c \
Middlewares/Third_Party/FatFs/src/option/syscall.c \
Middlewares/Third_Party/FatFs/src/diskio.c \
Middlewares/Third_Party/FatFs/src/ff.c \
Middlewares/Third_Party/FatFs/src/ff_gen_drv.c \
Middlewares/Third_Party/FreeRTOS/Source/portable/MemMang/heap_4.c \
Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1/port.c \
Middlewares/Third_Party/FreeRTOS/Source/croutine.c \
Middlewares/Third_Party/FreeRTOS/Source/event_groups.c \
Middlewares/Third_Party/FreeRTOS/Source/list.c \
Middlewares/Third_Party/FreeRTOS/Source/queue.c \
Middlewares/Third_Party/FreeRTOS/Source/tasks.c \
Middlewares/Third_Party/FreeRTOS/Source/timers.c \
Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS/cmsis_os.c \
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
FATFS/Target \
FATFS/App \
USB_DEVICE/App \
USB_DEVICE/Target \
Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1 \
Middlewares/ST/STM32_USB_Device_Library/Core/Inc \
Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc \
Middlewares/Third_Party/FatFs/src \
Middlewares/Third_Party/FreeRTOS/Source/include \
Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS

# ASM sources
ASM_SOURCES = \
startup_stm32f769xx.s

# AS includes
AS_INCLUDES = \
#-ICore\Inc

# Linker Script
LINKER_FILE = STM32F769NIHx_FLASH.ld
 
#######################################
# FLAGS
#######################################
# c
CFLAGS = -v -c -O1 -mcpu=cortex-m7 -g -gdwarf-2 -mfpu=fpv5-d16 -mfloat-abi=hard -fsingle-precision-constant -std=c++11 -DSTM32F769xx -DUSE_HAL_DRIVER 

# assembler
ASFLAGS = -c -mcpu=cortex-m7 -g -gdwarf-2 -mfpu=fpv5-d16 -mfloat-abi=hard

# linker
LDFLAGS = -v -mcpu=cortex-m7 -g -gdwarf-2 -mfpu=fpv5-d16 -mfloat-abi=hard  -specs=nosys.specs -lc -lm -lnosys -Wl,-Map=build/output.map,--cref -Wl,--gc-sections

# binaries
HEX = $(CP) -O ihex
BIN = $(CP) -O binary -S

#######################################
# build the application
#######################################
# default action: build all
all: $(TARGET_EXEC) $(BUILD_DIR)/output.hex $(BUILD_DIR)/output.bin

# list of objects
OBJECTS = $(addprefix $(BUILD_DIR)/,$(patsubst %s,%o,$(patsubst %c,%o,$(patsubst %cpp,%o,$(notdir $(C_SOURCES))))))
vpath %.c $(sort $(dir $(C_SOURCES)))
vpath %.cpp $(sort $(dir $(C_SOURCES)))
vpath %.s $(sort $(dir $(C_SOURCES)))
OBJECTS += $(ASM_SOURCES:%.s=$(BUILD_DIR)/%.o)

test:$(OBJECTS)

# src files
$(BUILD_DIR)/%.o: %.cpp $(BUILD_DIR)
	$(CC) $(CFLAGS) $(addprefix -I,$(C_INCLUDES)) $< -o $@
	
$(BUILD_DIR)/%.o: %.c $(BUILD_DIR)
	$(CC) $(CFLAGS) $(addprefix -I,$(C_INCLUDES)) $< -o $@

$(BUILD_DIR)/%.o: %.s $(BUILD_DIR)
	$(AS) $(ASFLAGS) $< -o $@

# linker
$(BUILD_DIR)/output.elf: $(OBJECTS) Makefile
	$(CC) $(LDFLAGS) -T$(LINKER_FILE) $(OBJECTS) -o $(TARGET_EXEC)
	$(SZ) $@

$(BUILD_DIR)/output.hex: $(TARGET_EXEC) | $(BUILD_DIR)
	$(HEX) $< $@
	
$(BUILD_DIR)/output.bin: $(TARGET_EXEC) | $(BUILD_DIR)
	$(BIN) $< $@	
	
$(BUILD_DIR):
	mkdir $@		

info:
	$(info ************  Info ************)
	@echo info C_SOURCES: 
	@echo $(C_SOURCES)
	@echo
	@echo info ASM_SOURCES: 
	@echo $(ASM_SOURCES)
	@echo
	@echo info OBJECTS: 
	@echo $(OBJECTS)
	@echo
	@echo info C_INCLUDES: 
	@echo $(C_INCLUDES)
	@echo
	@echo info TEST STUFF:
	@echo $(addprefix $(BUILD_DIR)/,$(notdir $(C_SOURCES:.c=.o)))

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