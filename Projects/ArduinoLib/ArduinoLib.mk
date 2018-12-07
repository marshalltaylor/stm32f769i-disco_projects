LIBRARY_DIR = ../ArduinoLib

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
