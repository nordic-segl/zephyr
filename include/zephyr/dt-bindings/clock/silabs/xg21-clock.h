/*
 * Copyright (c) 2024 Silicon Laboratories Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * This file was generated by the script gen_clock_control.py in the hal_silabs module.
 * Do not manually edit.
 */

#ifndef ZEPHYR_INCLUDE_DT_BINDINGS_CLOCK_SILABS_XG21_CLOCK_H_
#define ZEPHYR_INCLUDE_DT_BINDINGS_CLOCK_SILABS_XG21_CLOCK_H_

#include <zephyr/dt-bindings/dt-util.h>
#include "common-clock.h"

/*
 * DT macros for clock tree nodes.
 * Defined as:
 *  0..5 - Bit within CLKEN register
 *  6..8 - CLKEN register number
 * Must stay in sync with equivalent SL_BUS_*_VALUE constants in the Silicon Labs HAL to be
 * interpreted correctly by the clock control driver.
 */
#define CLOCK_AUTO 0xFFFFFFFFUL

#endif /* ZEPHYR_INCLUDE_DT_BINDINGS_CLOCK_SILABS_XG21_CLOCK_H_ */
