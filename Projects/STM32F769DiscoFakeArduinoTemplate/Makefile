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
# srcs/incs -- Project
######################################
#$(ARDUINO_REPO_DIR)/cores/arduino/main.cpp
#sketch.cpp \

PROJECT_C_SOURCES = \
Src/main.cpp

PROJECT_C_INCLUDES = \
. \
Inc

######################################
# srcs/incs -- Libraries
######################################
include ../ArduinoLib/ArduinoLib.mk
# Provides:
#   ARDUINO_LIB_C_SOURCES
#   ARDUINO_LIB_INCLUDES

######################################
# srcs/incs -- Arduino
######################################
include ../../Interfaces/ArduinoMod/ArduinoMod.mk
# Provides:
#   IFACE_C_SOURCES
#   IFACE_C_INCLUDES

######################################
# srcs/incs -- HAL
######################################
include ../../HAL/Files.mk
# Provides:
#   HAL_C_SOURCES
#   HAL_C_INCLUDES
#   LINKER_FILE


# C sources
C_SOURCES = \
$(PROJECT_C_SOURCES) \
$(ARDUINO_LIB_C_SOURCES) \
$(IFACE_C_SOURCES) \
$(HAL_C_SOURCES)

# C includes
C_INCLUDES = \
$(PROJECT_C_INCLUDES) \
$(ARDUINO_LIB_INCLUDES) \
$(IFACE_C_INCLUDES) \
$(HAL_C_INCLUDES)

#######################################
# FLAGS
#######################################
# c
#  -DUSE_HAL_DRIVER -DSTM32F7xx 
CFLAGS = -v -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-d16 -DSTM32F7xx '-D__weak=__attribute__((weak))' '-D__packed=__attribute__((__packed__))' -DSTM32F769xx -Og -g3 -Wall -fmessage-length=0 -ffunction-sections -c -fmessage-length=0

# Generate dependency information
CFLAGS += -MMD -MP -MF"$(@:%.o=%.d)"

# cpp
CPPFLAGS = $(CFLAGS) -std=c++11 -fno-rtti

# Message behavior
# -Werror -fsyntax-only -fmax-errors=1 -w
CFLAGS += -fmax-errors=1

# assembler
ASFLAGS = -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-d16 -g

# linker
LDFLAGS = -v -lc -g -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-d16 -specs=nosys.specs -specs=nano.specs -T$(LINKER_FILE) -Wl,-Map=$(BUILD_DIR)/output.map -Wl,--gc-sections -lm

# binaries
HEX = $(CP) -O ihex
BIN = $(CP) -O binary -S


#######################################
# build the application
#######################################
# default action: build all
all: make_directories $(TARGET_EXEC) $(BUILD_DIR)/output.hex $(BUILD_DIR)/output.bin

#PROJECT_OBJECTS
PROJECT_OBJECTS = $(addprefix $(BUILD_DIR)/PROJECT/,$(patsubst %s,%o,$(patsubst %c,%o,$(patsubst %cpp,%o,$(notdir $(PROJECT_C_SOURCES))))))
vpath %.c $(sort $(dir $(PROJECT_C_SOURCES)))
vpath %.cpp $(sort $(dir $(PROJECT_C_SOURCES)))
vpath %.s $(sort $(dir $(PROJECT_C_SOURCES)))

#ARDUINO_LIB_OBJECTS
ARDUINO_LIB_OBJECTS = $(addprefix $(BUILD_DIR)/ARDUINO_LIB/,$(patsubst %c,%o,$(patsubst %cpp,%o,$(notdir $(ARDUINO_LIB_C_SOURCES)))))
vpath %.c $(sort $(dir $(ARDUINO_LIB_C_SOURCES)))
vpath %.cpp $(sort $(dir $(ARDUINO_LIB_C_SOURCES)))

#IFACE_OBJECTS
IFACE_OBJECTS = $(addprefix $(BUILD_DIR)/IFACE/,$(patsubst %s,%o,$(patsubst %c,%o,$(patsubst %cpp,%o,$(notdir $(IFACE_C_SOURCES))))))
vpath %.c $(sort $(dir $(IFACE_C_SOURCES)))
vpath %.cpp $(sort $(dir $(IFACE_C_SOURCES)))
vpath %.s $(sort $(dir $(IFACE_C_SOURCES)))

#HAL_C_OBJECTS
HAL_OBJECTS = $(addprefix $(BUILD_DIR)/HAL/,$(patsubst %s,%o,$(patsubst %c,%o,$(patsubst %cpp,%o,$(notdir $(HAL_C_SOURCES))))))
vpath %.c $(sort $(dir $(HAL_C_SOURCES)))
vpath %.cpp $(sort $(dir $(HAL_C_SOURCES)))
vpath %.s $(sort $(dir $(HAL_C_SOURCES)))

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

$(BUILD_DIR)/IFACE/%.o: %.cpp
	@echo "***** ***** ***** input = $^, output = $@***** ***** *****"
	$(PP) $(CPPFLAGS) $(addprefix -I,$(C_INCLUDES)) $< -o $@
	@echo
	@echo

$(BUILD_DIR)/IFACE/%.o: %.c
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

$(BUILD_DIR)/HAL/%.o: %.s
	@echo "***** ***** ***** input = $^, output = $@***** ***** *****"
	$(AS) $(ASFLAGS) $(addprefix -I,$(C_INCLUDES)) $< -o $@
	@echo
	@echo

# list of all objects
OBJECTS = \
$(PROJECT_OBJECTS) \
$(ARDUINO_LIB_OBJECTS) \
$(IFACE_OBJECTS) \
$(HAL_OBJECTS)

# linker
$(BUILD_DIR)/output.elf: $(OBJECTS) Makefile
	$(CC) $(LDFLAGS) $(OBJECTS) -o $(TARGET_EXEC)
	$(SZ) $@
	@echo
	@echo

$(BUILD_DIR)/output.hex: $(TARGET_EXEC)
	$(HEX) $< $@
	
$(BUILD_DIR)/output.bin: $(TARGET_EXEC)
	$(BIN) $< $@	

.PHONY: make_directories

make_directories:
	mkdir -p $(BUILD_DIR)/PROJECT
	mkdir -p $(BUILD_DIR)/ARDUINO_LIB
	mkdir -p $(BUILD_DIR)/IFACE
	mkdir -p $(BUILD_DIR)/HAL

info:
	@echo "***** ***** ***** PROJECT ***** ***** *****"
	@echo PROJECT_C_SOURCES
	@echo $(PROJECT_C_SOURCES)
	@echo
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
	@echo IFACE_OBJECTS
	@echo $(IFACE_OBJECTS)
	@echo
	@echo IFACE_C_INCLUDES
	@echo $(IFACE_C_INCLUDES)
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