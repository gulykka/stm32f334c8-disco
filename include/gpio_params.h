/*
 * Copyright (C) 2021 Borovick Alexey
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @ingroup   boards_stm32f334c8-disco
 * @{
 *
 * @file
 * @brief     Board specific configuration of direct mapped GPIOs
 *
 * @author    Borovik Alexey <alexey@borovik.me>
 */

#ifndef GPIO_PARAMS_H
#define GPIO_PARAMS_H

#include "board.h"
#include "saul/periph.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief    GPIO pin configuration
 */
static const  saul_gpio_params_t saul_gpio_params[] =
{
    {
        .name = "LD3",
        .pin = LED3_PIN,
        .mode = GPIO_OUT
    },
    {
        .name = "LD4",
        .pin = LED4_PIN,
        .mode = GPIO_OUT
    },
    {
        .name = "LD5",
        .pin = LED5_PIN,
        .mode = GPIO_OUT
    },
    {
        .name = "LD6",
        .pin = LED6_PIN,
        .mode = GPIO_OUT
    },
    {
        .name = "BTN USER",
        .pin  = BTN0_PIN,
        .mode = BTN0_MODE
    },
};

#ifdef __cplusplus
}
#endif

#endif /* GPIO_PARAMS_H */
/** @} */
