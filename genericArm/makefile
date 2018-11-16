#######################################
# Directories
#######################################
BUILD_DIR ?= build
SRC_DIR ?= src
DEBUG_DIR ?= debug
OUTPUT_DIR ?= output
LINKER_FILE ?= 
GCC_PATH = /cygdrive/c/STM32/gcc-arm-none-eabi/bin

# Target Output Files
TARGET = genericArm
TARGET_ELF=$(OUTPUT_DIR)/$(TARGET).elf
TARGET_HEX=$(OUTPUT_DIR)/$(TARGET).hex

######################################
# source
######################################
# C sources
ASOURCES := $(shell find $(SRC_DIR) -name *.s)
CSOURCES := $(shell find $(SRC_DIR) -name *.c)
CXXSOURCES := $(shell find $(SRC_DIR) -name *.cpp)


# Search path and source files for the ST stdperiph library
VPATH		:= $(VPATH):$(STDPERIPH_DIR)/src
STDPERIPH_SRC	 = $(notdir $(wildcard $(STDPERIPH_DIR)/src/*.c))


INCLUDE_DIRS	 = $(SRC_DIR)


#######################################
# binaries
#######################################
PREFIX = arm-none-eabi-

CC = $(GCC_PATH)/$(PREFIX)gcc
CXX = $(GCC_PATH)/$(PREFIX)g++
AS = $(GCC_PATH)/$(PREFIX)gcc -x assembler-with-cpp
CP = $(GCC_PATH)/$(PREFIX)objcopy
SZ = $(GCC_PATH)/$(PREFIX)size

HEX = $(CP) -O ihex
BIN = $(CP) -O binary -S

#######################################
# build the object lists
#######################################
# list of objects
#OBJECTS += $(addprefix $(BUILD_DIR)/,$(notdir $(CSOURCES:.c=.o)))
#OBJECTS += $(addprefix $(BUILD_DIR)/,$(notdir $(CXXSOURCES:.cpp=.o)))
#################################
# Object List
#################################
OBJECTS=$(addprefix $(BUILD_DIR)/,$(notdir $(ASOURCES:.s=.o)))
OBJECTS+=$(addprefix $(BUILD_DIR)/,$(notdir $(CSOURCES:.c=.o)))
OBJECTS+=$(addprefix $(BUILD_DIR)/,$(notdir $(CXXSOURCES:.cpp=.o)))

#######################################
# CFLAGS
#######################################
CPU = -mcpu=cortex-m7
FPU = -mfpu=fpv5-d16
FLOAT-ABI = -mfloat-abi=hard
MCU = $(CPU) -mthumb $(FPU) $(FLOAT-ABI)
OPT = -Og

# macros for gcc
# AS defines
AS_DEFS = 

# C defines
C_DEFS =  \
-DUSE_HAL_DRIVER \
-DSTM32F769xx

#################################
# Flags
#################################
#MCFLAGS=-mcpu=cortex-m3 -mthumb
#OPTIMIZE = -Os
#DEFS=-DTARGET_STM32F10X_MD -D__CORTEX_M4 -D__FPU_PRESENT -DWORDS_STACK_SIZE=200 -DSTM32F10X_MD -DUSE_STDPERIPH_DRIVER
#CFLAGS=-c $(MCFLAGS) $(DEFS) $(OPTIMIZE) $(addprefix -I,$(INCLUDE_DIRS)) -std=c99
#CXXFLAGS=-c $(MCFLAGS) $(DEFS) $(OPTIMIZE) $(addprefix -I,$(INCLUDE_DIRS)) -std=c++11
#CXXFLAGS+=-U__STRICT_ANSI__
#LDSCRIPT=$(BREEZY_DIR)/stm32_flash.ld
#LDFLAGS =-T $(LDSCRIPT) $(MCFLAGS) -lm -nostartfiles -lc --specs=rdimon.specs $(ARCH_FLAGS)  $(LTO_FLAGS)  $(DEBUG_FLAGS) -static  -Wl,-gc-sections
#######################################
# FLAGS
#######################################
ASFLAGS = $(MCU) $(AS_DEFS) $(AS_INCLUDES) $(OPT) -Wall -fdata-sections -ffunction-sections

CFLAGS = $(MCU) $(C_DEFS) $(C_INCLUDES) $(OPT) -Wall -fdata-sections -ffunction-sections -std=c99

ifeq ($(DEBUG), 1)
CFLAGS += -g -gdwarf-2
endif

#CXXFLAGS=-c $(MCU) $(C_DEFS) $(C_INCLUDES) $(OPT) $(addprefix -I,$(INCLUDE_DIRS)) -std=c++11
#CXXFLAGS+=-U__STRICT_ANSI__


# Generate dependency information
CFLAGS += -MMD -MP -MF"$(@:%.o=%.d)"

#######################################
# LDFLAGS
#######################################
# link script
LDSCRIPT = STM32F769NIHx_FLASH.ld

# libraries
LIBS = -lc -lm -lnosys 
LIBDIR = 
LDFLAGS = $(MCU) -specs=nano.specs -T$(LDSCRIPT) $(LIBDIR) $(LIBS) -Wl,-Map=$(DEBUG_DIR)/$(TARGET).map,--cref -Wl,--gc-sections

#################################
# Build
#################################
# default action: build all
all: $(TARGET_ELF) $(TARGET_HEX)
# $(BUILD_DIR)/$(TARGET).bin

$(TARGET_HEX): $(TARGET_ELF)
	$(CP) -O ihex --set-start 0x8000000 $< $@

$(TARGET_ELF): $(OBJECTS)
	$(info ************  Linking ************)
	$(CXX) -o $@ $^ $(LDFLAGS)
	$(SIZE) $(TARGET_ELF)

$(BUILD_DIR)/%.o: %.cpp
	$(info ************  Compiling C++ ************)
	$(AS) -c $(CFLAGS) $< -o $@
	#@mkdir -p $(dir $@)
	#@echo %% $(notdir $<)
	#@$(CXX) -c -o $@ $(CXXFLAGS) $<

$(BUILD_DIR)/%.o: %.c
	$(info ************  Compiling C ************)
	@mkdir -p $(dir $@)
	@echo %% $(notdir $<)
	@$(CC) -c -o $@ $(CFLAGS) $<

$(BUILD_DIR)/%.o: %.s
	$(info ************  Assembling ************)
	@mkdir -p $(dir $@)
	@echo %% $(notdir $<)
	@$(CC) -c -o $@ $(CFLAGS) $<

.PHONY: clean

clean:
	$(RM) -r $(BUILD_DIR)
	$(RM) -r $(DEBUG_DIR)
	$(RM) -r $(OUTPUT_DIR)

info:
	$(info ************  Info ************)
	$(info OBJECTS: )
	@echo $(OBJECTS)