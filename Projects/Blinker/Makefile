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

TARGET_EXEC = $(BUILD_DIR)/output.elf

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
# Include object from HAL directory

PROJECT_C_SOURCES = \
$(PROJECT_DIR)/src/main.cpp

PROJECT_C_INCLUDES = \
$(PROJECT_DIR)/include

IFACE_C_SOURCES = \
$(IFACE_DIR)/src/fakeLib.cpp \
$(IFACE_DIR)/src/interface.cpp

IFACE_C_INCLUDES = \
$(IFACE_DIR)/include

include ../../HAL/Files.mk
# Provides:
#   HAL_C_SOURCES
#   HAL_C_INCLUDES
#   HAL_ASM_SOURCES
#   LINKER_FILE

# C sources
C_SOURCES = $(PROJECT_C_SOURCES) $(IFACE_C_SOURCES) $(HAL_C_SOURCES)

# C includes
C_INCLUDES = $(PROJECT_C_INCLUDES) $(IFACE_C_INCLUDES) $(HAL_C_INCLUDES)

# AS includes
AS_INCLUDES = \
#-ICore\Inc

#######################################
# FLAGS
#######################################
# c
CFLAGS = -v -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-d16 '-D__weak=__attribute__((weak))' '-D__packed=__attribute__((__packed__))' -DUSE_HAL_DRIVER -std=c++11 -DSTM32F769xx -Og -g3 -Wall -fmessage-length=0 -ffunction-sections -c -fmessage-length=0

# Generate dependency information
CFLAGS += -MMD -MP -MF"$(@:%.o=%.d)"

# Message behavior
CFLAGS += -fmax-errors=1 -Werror

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
vpath %.cpp $(sort $(dir $(PROJECT_C_SOURCES)))
# list of iface objects
IFACE_OBJECTS = $(addprefix $(IFACE_BUILD_DIR)/,$(patsubst %s,%o,$(patsubst %c,%o,$(patsubst %cpp,%o,$(notdir $(IFACE_C_SOURCES))))))
vpath %.c $(sort $(dir $(IFACE_C_SOURCES)))
vpath %.cpp $(sort $(dir $(IFACE_C_SOURCES)))
# list of hal objects
HAL_OBJECTS = $(addprefix $(HAL_BUILD_DIR)/,$(patsubst %s,%o,$(patsubst %c,%o,$(patsubst %cpp,%o,$(notdir $(HAL_C_SOURCES))))))
HAL_OBJECTS += $(addprefix $(HAL_BUILD_DIR)/,$(patsubst %s,%o,$(notdir $(HAL_ASM_SOURCES))))
vpath %.c $(sort $(dir $(HAL_C_SOURCES)))
vpath %.cpp $(sort $(dir $(HAL_C_SOURCES)))
vpath %.s $(sort $(dir $(HAL_ASM_SOURCES)))
# list of all objects
OBJECTS = $(IFACE_OBJECTS) $(HAL_OBJECTS) $(PROJECT_OBJECTS)


# project src files
$(PROJECT_BUILD_DIR)/%.o: %.cpp
	@echo "***** ***** ***** input = $^, output = $@***** ***** *****"
	$(CC) $(CFLAGS) $(addprefix -I,$(C_INCLUDES)) $< -o $@
	@echo
	@echo
	
# iface src files
$(IFACE_BUILD_DIR)/%.o: %.cpp
	@echo "***** ***** ***** input = $^, output = $@***** ***** *****"
	$(CC) $(CFLAGS) $(addprefix -I,$(C_INCLUDES)) $< -o $@
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
	$(CC) $(CFLAGS) $(addprefix -I,$(C_INCLUDES)) $< -o $@
	@echo
	@echo
	
$(HAL_BUILD_DIR)/%.o: %.c
	@echo "***** ***** ***** input = $^, output = $@***** ***** *****"
	$(CC) $(CFLAGS) $(addprefix -I,$(C_INCLUDES)) $< -o $@
	@echo
	@echo

$(HAL_BUILD_DIR)/%.o: %.s
	@echo "***** ***** ***** input = $^, output = $@***** ***** *****"
	$(AS) $(ASFLAGS) $< -o $@
	@echo
	@echo

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