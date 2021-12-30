/*
 * LPS25HB.c
 *
 *  Created on: Dec 29, 2021
 *      Author: samue
 */

#include "LPS25HB.h"

uint8_t LPS25HB_address = LPS25HB_DEVICE_ADDRESS_0;
uint16_t LPS25HB_PressureOffset;

uint8_t LPS25HB_read_byte(uint8_t reg_addr) {
	uint8_t data = 0;
	return *(i2c_master_read(&data, 1, reg_addr, LPS25HB_address, 0));
}

void LPS25HB_write_byte(uint8_t reg_addr, uint8_t value) {
	i2c_master_write(value, reg_addr, LPS25HB_address, 0);
}

uint8_t LPS25HB_init(void) {

	uint8_t status = 0;

	if (LPS25HB_read_byte(LPS25HB_WHO_AM_I_ADDRESS) == LPS25HB_WHO_AM_I_VALUE) {
		status = 1;
	} else {
		LPS25HB_address = LPS25HB_DEVICE_ADDRESS_1;

		if (LPS25HB_read_byte(LPS25HB_WHO_AM_I_ADDRESS)
				== LPS25HB_WHO_AM_I_VALUE) {
			status = 1;
		} else {
			status = 0;
		}
	}

	uint8_t ctrl1 = 148;
	LPS25HB_write_byte(LPS25HB_ADDRESS_CTRL1, ctrl1);

	LPS25HB_get_pressure_calibration();

	return status;
}

void LPS25HB_get_pressure_calibration(void){
	LPS25HB_PressureOffset = LPS25HB_read_byte(LPS25HB_ADDRESS_RPDS_L)
				| (LPS25HB_read_byte(LPS25HB_ADDRESS_RPDS_H) << 8);
}

void LPS25HB_get_pressure(float* pressure) {
	uint32_t p_out = LPS25HB_read_byte(LPS25HB_ADDRESS_PRESS_OUT_XL)
			| (LPS25HB_read_byte(LPS25HB_ADDRESS_PRESS_OUT_L) << 8)
			| (LPS25HB_read_byte(LPS25HB_ADDRESS_PRESS_OUT_H) << 16);


	*pressure = p_out/4096.00;
}
