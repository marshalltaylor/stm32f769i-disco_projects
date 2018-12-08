HAL_DIR = ../../HAL

HAL_C_SOURCES = \
$(HAL_DIR)/src/configuration.cpp \
$(HAL_DIR)/src/system_stm32f7xx.c \
$(HAL_DIR)/src/stm32f7xx_it.c \
$(HAL_DIR)/src/stm32f7xx_hal_msp.c \
$(HAL_DIR)/src/stm32f7xx_hal_timebase_TIM.c \
$(HAL_DIR)/FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_pcd.c \
$(HAL_DIR)/FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_pcd_ex.c \
$(HAL_DIR)/FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Src/stm32f7xx_ll_usb.c \
$(HAL_DIR)/FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_cortex.c \
$(HAL_DIR)/FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_dfsdm.c \
$(HAL_DIR)/FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_i2c.c \
$(HAL_DIR)/FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_i2c_ex.c \
$(HAL_DIR)/FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_sai.c \
$(HAL_DIR)/FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_sai_ex.c \
$(HAL_DIR)/FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Src/stm32f7xx_ll_sdmmc.c \
$(HAL_DIR)/FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_mmc.c \
$(HAL_DIR)/FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_tim.c \
$(HAL_DIR)/FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_tim_ex.c \
$(HAL_DIR)/FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_rcc.c \
$(HAL_DIR)/FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_rcc_ex.c \
$(HAL_DIR)/FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_flash.c \
$(HAL_DIR)/FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_flash_ex.c \
$(HAL_DIR)/FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_gpio.c \
$(HAL_DIR)/FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_dma.c \
$(HAL_DIR)/FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_dma_ex.c \
$(HAL_DIR)/FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_pwr.c \
$(HAL_DIR)/FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_pwr_ex.c \
$(HAL_DIR)/FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal.c \
$(HAL_DIR)/USB_DEVICE/App/usb_device.c \
$(HAL_DIR)/USB_DEVICE/App/usbd_desc.c \
$(HAL_DIR)/USB_DEVICE/App/usbd_cdc_if.c \
$(HAL_DIR)/USB_DEVICE/Target/usbd_conf.c \
$(HAL_DIR)/Middlewares/ST/STM32_USB_Device_Library/Core/Src/usbd_core.c \
$(HAL_DIR)/Middlewares/ST/STM32_USB_Device_Library/Core/Src/usbd_ctlreq.c \
$(HAL_DIR)/Middlewares/ST/STM32_USB_Device_Library/Core/Src/usbd_ioreq.c \
$(HAL_DIR)/Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Src/usbd_cdc.c \
$(HAL_DIR)/FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_uart.c \
$(HAL_DIR)/startup_stm32f769xx.s

HAL_C_INCLUDES = \
$(HAL_DIR)/FW_F7_V1.12.0/CMSIS/Include \
$(HAL_DIR)/FW_F7_V1.12.0/CMSIS/Device/ST/STM32F7xx/Include \
$(HAL_DIR)/FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Inc \
$(HAL_DIR)/FW_F7_V1.12.0/STM32F7xx_HAL_Driver/Inc/Legacy \
$(HAL_DIR)/include \
$(HAL_DIR)/USB_DEVICE/App \
$(HAL_DIR)/USB_DEVICE/Target \
$(HAL_DIR)/Middlewares/ST/STM32_USB_Device_Library/Core/Inc \
$(HAL_DIR)/Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc

##HAL_ASM_SOURCES = \
##$(HAL_DIR)/startup_stm32f769xx.s

# Linker Script
LINKER_FILE = $(HAL_DIR)/STM32F769NIHx_FLASH.ld