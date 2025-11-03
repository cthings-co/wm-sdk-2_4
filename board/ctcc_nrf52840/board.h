/* Copyright(c) 2025 CTHINGS.CO. All Rights Reserved.
 *
 * See file LICENSE.txt for full license details.
 *
 */

/**
 * @file
 *
 * Board definition for the
 * <a href="https://cthings.co/products/connectivity-cards">CTHINGS.CO Connectivity Card nRF52840 mPCIe/nRF52840 M.2</a>
 */
#ifndef BOARD_CTCC_NRF52840_BOARD_H_
#define BOARD_CTCC_NRF52840_BOARD_H_

// CTHINGS.CO Connectivity Card nRF52840 mPCIe/nRF52840 M.2

// NRF_GPIO is mapped to NRF_P0 , for pins P0.00 ... P0.31
// Use NRF_P1 for pins P1.00 ... P1.15
// With nrf_gpio.h, use SW_pin (logical pins, port-aware)

/**
NRF_P0  SW_pin  CTCC nRF52840 M.2   nRF52840 mPCIe   Notes (recommended usage)
------------------------------------------------------------------------
P0.00   0       [XTAL 32k]          [XTAL 32k]
P0.01   1       [XTAL 32k]          [XTAL 32k]
P0.02   2       -                   -
P0.03   3       -                   -
P0.04   4       -                   -
P0.05   5       -                   -
P0.06   6       -                   -
P0.07   7       TRACECLK            TRACECLK
P0.08   8       -                   -
P0.09   9       -                   -
P0.10   10      -                   -
P0.11   11      TRACEDATA2          TRACEDATA2
P0.12   12      TRACEDATA1          TRACEDATA1
P0.13   13      -                   -
P0.14   14      -                   -
P0.15   15      -                   -
P0.16   16      -                   -
P0.17   17      -                   -
P0.18   18      nRESET              nRESET
P0.19   19      COEX3               -
P0.20   20      COEX2               COEX2
P0.21   21      COEX1               COEX1
P0.22   22      LED2                LED2
P0.23   23      LED1                LED1
P0.24   24      W_DISABLE           W_DISABLE
P0.25   25      -                   -
P0.26   26      -                   -
P0.27   27      -                   -
P0.28   28      -                   -
P0.29   29      -                   -
P0.30   30      -                   -
P0.31   31      -                   -

NRF_P1:
P1.00   32      SWO/TRACEDATA0      SWO/TRACEDATA0
P1.01   33      -                   -
P1.02   34      -                   -
P1.03   35      -                   -
P1.04   36      -                   -
P1.05   37      -                   -
P1.06   38      -                   -
P1.07   39      -                   -
P1.08   40      -                   -
P1.09   41      TRACEDATA3          TRACEDATA3
P1.10   42      -                   -
P1.11   43      -                   -
P1.12   44      -                   -
P1.13   45      -                   -
P1.14   46      -                   -
P1.15   47      -                   -
*/

// Serial port pins
// This board does not have UART routed
// only USB is avaliable for communication

// List of GPIO pins
#define BOARD_GPIO_PIN_LIST            {23, /* P0.23 */\
                                        22} /* P0.22 */

// User friendly name for GPIOs (IDs mapped to the BOARD_GPIO_PIN_LIST table)
#define BOARD_GPIO_ID_LED1              0  // mapped to pin P0.23
#define BOARD_GPIO_ID_LED2              1  // mapped to pin P0.22

// List of LED IDs
#define BOARD_LED_ID_LIST               {BOARD_GPIO_ID_LED1,  BOARD_GPIO_ID_LED2}

// Active low polarity for LEDs
#define BOARD_LED_ACTIVE_LOW            false

// The board supports DCDC (#define BOARD_SUPPORT_DCDC)
// Since SDK v1.2 (bootloader > v7) this option has been move to
// board/<board_name>/config.mk. Set board_hw_dcdc to yes to enable DCDC.
#ifdef BOARD_SUPPORT_DCDC
#error This option has been moved to board/<board_name>/config.mk
#endif


#endif /* BOARD_CTCC_NRF52840_BOARD_H_ */
