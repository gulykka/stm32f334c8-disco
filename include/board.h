/*
 * Copyright (C) 2021 Borovick Alexey
 *
 * This file is subject to the terms and conditions of the GNU Lesser General
 * Public License v2.1. See the file LICENSE in the top level directory for more
 * details.
 */

/**
 * @ingroup     boards_stm32f334c8-disco
 * @{
 *
 * @file
 * @brief       Board specific definitions for the stm32f334c8-disco evaluation board
 *
 * @author      Borovik Alexey <alexey@borovik.me>
 */

#ifndef BOARD_H
#define BOARD_H

#include "cpu.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @name Macros for controlling the on-board LEDs.
 * @{
 */
#define LED3_PIN            GPIO_PIN(PORT_B, 6)
#define LED4_PIN            GPIO_PIN(PORT_B, 8)
#define LED5_PIN            GPIO_PIN(PORT_B, 9)
#define LED6_PIN            GPIO_PIN(PORT_B, 7)

#define LED_PORT            GPIOB
#define LED3_MASK           (1 << 6)
#define LED4_MASK           (1 << 8)
#define LED5_MASK           (1 << 9)
#define LED6_MASK           (1 << 7)


#define LED3_ON             (LED_PORT->BSRR = LED3_MASK)
#define LED3_OFF            (LED_PORT->BSRR = (LED3_MASK << 16))
#define LED3_TOGGLE         (LED_PORT->ODR  ^= LED3_MASK)

#define LED4_ON             (LED_PORT->BSRR = LED4_MASK)
#define LED4_OFF            (LED_PORT->BSRR = (LED4_MASK << 16))
#define LED4_TOGGLE         (LED_PORT->ODR  ^= LED4_MASK)

#define LED5_ON             (LED_PORT->BSRR = LED5_MASK)
#define LED5_OFF            (LED_PORT->BSRR = (LED5_MASK << 16))
#define LED5_TOGGLE         (LED_PORT->ODR  ^= LED5_MASK)

#define LED6_ON             (LED_PORT->BSRR = LED6_MASK)
#define LED6_OFF            (LED_PORT->BSRR = (LED6_MASK << 16))
#define LED6_TOGGLE         (LED_PORT->ODR  ^= LED6_MASK)

/** @} */

/**
 * @name User button
 * @{
 */
#define BTN0_PIN            GPIO_PIN(PORT_A, 0)
#define BTN0_MODE           GPIO_IN
/** @} */

/**
 * @name Default UART configuration
 * @{
 */
#define STDIO_UART_DEV          UART_DEV(1)
/** @} */

/**
 * @name ENC28J60 Initialization
 * @{
 */
#define ENC28J60_PARAM_SPI      (SPI_DEV(0))
#define ENC28J60_PARAM_CS       (GPIO_PIN(PORT_B, 10))
#define ENC28J60_PARAM_INT      (GPIO_PIN(PORT_B, 11))
#define ENC28J60_PARAM_RESET    (GPIO_PIN(PORT_B, 2))
/** @} */

/**
 * @brief Initialize board specific hardware, including clock, LEDs and std-IO
 */
void board_init(void);

#ifdef __cplusplus
}
#endif

#endif /* BOARD_H */
/** @} */
