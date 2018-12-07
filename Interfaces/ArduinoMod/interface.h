#ifndef INTERFACE_H
#define INTERFACE_H

#include "configuration.h"
#include "stm32f7xx_hal.h"
#include "usb_device.h"
#include "usbd_core.h"
#include "usbd_def.h"
#include "usbd_desc.h"
#include "usbd_cdc_if.h"

void init_hardware(void);

#endif