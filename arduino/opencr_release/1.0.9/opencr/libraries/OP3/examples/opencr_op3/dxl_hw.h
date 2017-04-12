/*
 *  dxl_hw.h
 *
 *  dynamixel hardware
 *
 *  Created on: 2016. 10. 21.
 *      Author: Baram
 */

#ifndef DXL_HW_H
#define DXL_HW_H


#include "dxl_def.h"


#ifdef __cplusplus
 extern "C" {
#endif


#ifdef __cplusplus
}
#endif




void dxl_hw_begin(uint8_t baud);

void dxl_hw_tx_enable(void);
void dxl_hw_tx_disable(void);

void dxl_hw_power_enable(void);
void dxl_hw_power_disable(void);

uint8_t dxl_hw_read(void);
void    dxl_hw_write(uint8_t value);

uint32_t dxl_hw_available(void);

#endif
