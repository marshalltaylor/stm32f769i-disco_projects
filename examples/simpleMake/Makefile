######################################
# simpleMake Makefile
# Requires compiler only
######################################


#######################################
# paths
#######################################
# Build path
BUILD_DIR = build

SRC_DIR = src
INCLUDE_DIR = include/
CMSIS_SRC_DIR = FW_F7_V1.12.0/

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
fakeLib.cpp \
main.cpp \
system_stm32f7xx.c

# C includes
C_INCLUDES = \
FW_F7_V1.12.0/CMSIS/Include \
FW_F7_V1.12.0/CMSIS/Device/ST/STM32F7xx/Include \
include/

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
CFLAGS = -v -c -O1 -mcpu=cortex-m7 -g -gdwarf-2 -mfpu=fpv5-d16 -mfloat-abi=hard -fsingle-precision-constant -std=c++11 -DSTM32F769xx 

# assembler
ASFLAGS = -c -mcpu=cortex-m7 -g -gdwarf-2 -mfpu=fpv5-d16 -mfloat-abi=hard

# linker
LDFLAGS = -v -mcpu=cortex-m7 -g -gdwarf-2 -mfpu=fpv5-d16 -mfloat-abi=hard -specs=nano.specs -specs=nosys.specs -lc -lm -lnosys -Wl,-Map=build/output.map,--cref -Wl,--gc-sections

# binaries
HEX = $(CP) -O ihex
BIN = $(CP) -O binary -S

#######################################
# build the application
#######################################
# default action: build all
all: $(TARGET_EXEC) $(BUILD_DIR)/output.hex $(BUILD_DIR)/output.bin

# list of objects
OBJECTS = $(addsuffix .o,$(addprefix $(BUILD_DIR)/,$(basename $(C_SOURCES))))
OBJECTS += $(ASM_SOURCES:%.s=$(BUILD_DIR)/%.o)

test:$(OBJECTS)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp $(BUILD_DIR)
	@echo ************  Compiling C++ ************
	$(CC) $(CFLAGS) $(addprefix -I,$(C_INCLUDES)) $< -o $@
	
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c $(BUILD_DIR)
	@echo ************  Compiling C   ************
	$(CC) $(CFLAGS) $(addprefix -I,$(C_INCLUDES)) $< -o $@
	
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.s $(BUILD_DIR)
	@echo ************  Compiling C++ ************
	$(AS) $(ASFLAGS) $< -o $@

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
	@echo info C_INCLUDES w/ -I: 
	@echo $(addprefix -I,$(C_INCLUDES))

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