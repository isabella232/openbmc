/* Copyright 2020-present Facebook. All Rights Reserved.
 *
 * This file contains code to support IPMI2.0 Specificaton available @
 * http://www.intel.com/content/www/us/en/servers/ipmi/ipmi-specifications.html
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */
#include <stdio.h>
#include <stdlib.h>
#include <syslog.h>
#include <openbmc/libgpio.h>
#include "fbgc_gpio.h"


/* GPIO Expander gpio table */
gpio_cfg gpio_expander_gpio_table[] = {
  /* shadow_name, pin_name, direction, value */

  // COMP_PRSNT_N: P00 (748)
  [GPIO_COMP_PRSNT_N] =
  {"COMP_PRSNT_N", NULL, GPIO_DIRECTION_IN,  GPIO_VALUE_INVALID},
  // FAN_0_INS_N: P01 (749)
  [GPIO_FAN_0_INS_N] =
  {"FAN_0_INS_N", NULL, GPIO_DIRECTION_IN,  GPIO_VALUE_INVALID},
  // FAN_1_INS_N: P02 (750)
  [GPIO_FAN_1_INS_N] =
  {"FAN_1_INS_N", NULL, GPIO_DIRECTION_IN,  GPIO_VALUE_INVALID},
  // FAN_2_INS_N: P03 (751)
  [GPIO_FAN_2_INS_N] =
  {"FAN_2_INS_N", NULL, GPIO_DIRECTION_IN,  GPIO_VALUE_INVALID},
  // FAN_3_INS_N: P04 (752)
  [GPIO_FAN_3_INS_N] =
  {"FAN_3_INS_N", NULL, GPIO_DIRECTION_IN,  GPIO_VALUE_INVALID},
  // UIC_RMT_INS_N: P05 (753)
  [GPIO_UIC_RMT_INS_N] =
  {"UIC_RMT_INS_N", NULL, GPIO_DIRECTION_IN,  GPIO_VALUE_INVALID},
  // SCC_LOC_INS_N: P06 (754)
  [GPIO_SCC_LOC_INS_N] =
  {"SCC_LOC_INS_N", NULL, GPIO_DIRECTION_IN,  GPIO_VALUE_INVALID},
  // SCC_RMT_INS_N: P07 (755)
  [GPIO_SCC_RMT_INS_N] =
  {"SCC_RMT_INS_N", NULL, GPIO_DIRECTION_IN,  GPIO_VALUE_INVALID},
  // SCC_LOC_TYPE_0: P10 (756)
  [GPIO_SCC_LOC_TYPE_0] =
  {"SCC_LOC_TYPE_0", NULL, GPIO_DIRECTION_IN,  GPIO_VALUE_INVALID},
  // SCC_RMT_TYPE_0: P11 (757)
  [GPIO_SCC_RMT_TYPE_0] =
  {"SCC_RMT_TYPE_0", NULL, GPIO_DIRECTION_IN,  GPIO_VALUE_INVALID},
  // SCC_STBY_PGOOD: P12 (758)
  [GPIO_SCC_STBY_PGOOD] =
  {"SCC_STBY_PGOOD", NULL, GPIO_DIRECTION_IN,  GPIO_VALUE_INVALID},
  // SCC_FULL_PGOOD: P13 (759)
  [GPIO_SCC_FULL_PGOOD] =
  {"SCC_FULL_PGOOD", NULL, GPIO_DIRECTION_IN,  GPIO_VALUE_INVALID},
  // COMP_PGOOD: P14 (760)
  [GPIO_COMP_PGOOD] =
  {"COMP_PGOOD", NULL, GPIO_DIRECTION_IN,  GPIO_VALUE_INVALID},
  // DRAWER_CLOSED_N: P15 (761)
  [GPIO_DRAWER_CLOSED_N] =
  {"DRAWER_CLOSED_N", NULL, GPIO_DIRECTION_IN,  GPIO_VALUE_INVALID},
  // E1S_1_PRSNT_N: P16 (762)
  [GPIO_E1S_1_PRSNT_N] =
  {"E1S_1_PRSNT_N", NULL, GPIO_DIRECTION_IN,  GPIO_VALUE_INVALID},
  // E1S_2_PRSNT_N: P17 (763)
  [GPIO_E1S_2_PRSNT_N] =
  {"E1S_2_PRSNT_N", NULL, GPIO_DIRECTION_IN,  GPIO_VALUE_INVALID},
  // I2C_E1S_1_RST_N: P00 (764)
  [GPIO_I2C_E1S_1_RST_N] =
  {"I2C_E1S_1_RST_N", NULL, GPIO_DIRECTION_OUT, GPIO_VALUE_HIGH},
  // I2C_E1S_2_RST_N: P01 (765)
  [GPIO_I2C_E1S_2_RST_N] =
  {"I2C_E1S_2_RST_N", NULL, GPIO_DIRECTION_OUT, GPIO_VALUE_HIGH},
  // E1S_1_LED_ACT: P02 (766)
  [GPIO_E1S_1_LED_ACT] =
  {"E1S_1_LED_ACT", NULL, GPIO_DIRECTION_OUT, GPIO_VALUE_LOW},
  // E1S_2_LED_ACT: P03 (767)
  [GPIO_E1S_2_LED_ACT] =
  {"E1S_2_LED_ACT", NULL, GPIO_DIRECTION_OUT, GPIO_VALUE_LOW},
  // SCC_STBY_PWR_EN: P04 (768)
  [GPIO_SCC_STBY_PWR_EN] =
  {"SCC_STBY_PWR_EN", NULL, GPIO_DIRECTION_OUT, GPIO_VALUE_HIGH},
  // SCC_FULL_PWR_EN: P05 (769)
  [GPIO_SCC_FULL_PWR_EN] =
  {"SCC_FULL_PWR_EN", NULL, GPIO_DIRECTION_OUT, GPIO_VALUE_HIGH},
  // BMC_EXP_SOFT_RST_N: P06 (770)
  [GPIO_BMC_EXP_SOFT_RST_N] =
  {"BMC_EXP_SOFT_RST_N", NULL, GPIO_DIRECTION_OUT, GPIO_VALUE_HIGH},
  // UIC_COMP_BIC_RST_N: P07 (771)
  [GPIO_UIC_COMP_BIC_RST_N] =
  {"UIC_COMP_BIC_RST_N", NULL, GPIO_DIRECTION_OUT, GPIO_VALUE_HIGH},
  // E1S_1_3V3EFUSE_PGOOD: P10 (772)
  [GPIO_E1S_1_3V3EFUSE_PGOOD] =
  {"E1S_1_3V3EFUSE_PGOOD", NULL, GPIO_DIRECTION_IN,  GPIO_VALUE_INVALID},
  // E1S_2_3V3EFUSE_PGOOD: P11 (773)
  [GPIO_E1S_2_3V3EFUSE_PGOOD] =
  {"E1S_2_3V3EFUSE_PGOOD", NULL, GPIO_DIRECTION_IN,  GPIO_VALUE_INVALID},
  // P12V_NIC_FAULT_N: P12 (774)
  [GPIO_P12V_NIC_FAULT_N] =
  {"P12V_NIC_FAULT_N", NULL, GPIO_DIRECTION_IN,  GPIO_VALUE_INVALID},
  // P3V3_NIC_FAULT_N: P13 (775)
  [GPIO_P3V3_NIC_FAULT_N] =
  {"P3V3_NIC_FAULT_N", NULL, GPIO_DIRECTION_IN,  GPIO_VALUE_INVALID},
  // SCC_POR_RST_N: P14 (776)
  [GPIO_SCC_POR_RST_N] =
  {"SCC_POR_RST_N", NULL, GPIO_DIRECTION_OUT, GPIO_VALUE_HIGH},
  // IOC_T7_SYS_PGOOD: P15 (777)
  [GPIO_IOC_T7_SYS_PGOOD] =
  {"IOC_T7_SYS_PGOOD", NULL, GPIO_DIRECTION_IN,  GPIO_VALUE_INVALID},
  // BMC_COMP_BLED: P16 (778)
  [GPIO_BMC_COMP_BLED] =
  {"BMC_COMP_BLED", NULL, GPIO_DIRECTION_OUT, GPIO_VALUE_LOW},
  // BMC_COMP_YLED: P17 (779)
  [GPIO_BMC_COMP_YLED] =
  {"BMC_COMP_YLED", NULL, GPIO_DIRECTION_OUT, GPIO_VALUE_LOW},
  // LAST
  {NULL, NULL, GPIO_DIRECTION_INVALID, GPIO_VALUE_INVALID}
};

/* BMC gpio table */
gpio_cfg bmc_gpio_table[] = {
  /* shadow_name, pin_name, direction, value */

  // FPGA_CRCERROR, GPIOB0 (824)
  [GPIO_FPGA_CRCERROR] =
  {"FPGA_CRCERROR", "GPIOB0", GPIO_DIRECTION_IN, GPIO_VALUE_INVALID},
  // FPGA_NCONFIG, GPIOB1 (825)
  [GPIO_FPGA_NCONFIG] =
  {"FPGA_NCONFIG", "GPIOB1", GPIO_DIRECTION_IN, GPIO_VALUE_INVALID},
  // BMC_SCC_FAULT_IN_R, GPIOB2 (826)
  [GPIO_BMC_SCC_FAULT_IN_R] =
  {"BMC_SCC_FAULT_IN_R", "GPIOB2", GPIO_DIRECTION_IN, GPIO_VALUE_INVALID},
  // HSC_P12V_DPB_FAULT_N_IN_R, GPIOB4 (828)
  [GPIO_HSC_P12V_DPB_FAULT_N_IN_R] =
  {"HSC_P12V_DPB_FAULT_N_IN_R", "GPIOB4", GPIO_DIRECTION_IN, GPIO_VALUE_INVALID},
  // HSC_COMP_FAULT_N_IN_R, GPIOB5 (829)
  [GPIO_HSC_COMP_FAULT_N_IN_R] =
  {"HSC_COMP_FAULT_N_IN_R", "GPIOB5", GPIO_DIRECTION_IN, GPIO_VALUE_INVALID},
  // BMC_NIC_PWRBRK_R, GPIOC1 (833)
  [GPIO_BMC_NIC_PWRBRK_R] =
  {"BMC_NIC_PWRBRK_R", "GPIOC1", GPIO_DIRECTION_OUT, GPIO_VALUE_LOW},
  // BMC_NIC_SMRST_N_R, GPIOC2 (834)
  [GPIO_BMC_NIC_SMRST_N_R] =
  {"BMC_NIC_SMRST_N_R", "GPIOC2", GPIO_DIRECTION_OUT, GPIO_VALUE_HIGH},
  // NIC_WAKE_BMC_N, GPIOC3 (835)
  [GPIO_NIC_WAKE_BMC_N] =
  {"NIC_WAKE_BMC_N", "GPIOC3", GPIO_DIRECTION_IN, GPIO_VALUE_INVALID},
  // BMC_NIC_FULL_PWR_EN_R, GPIOC4 (836)
  [GPIO_BMC_NIC_FULL_PWR_EN_R] =
  {"BMC_NIC_FULL_PWR_EN_R", "GPIOC4", GPIO_DIRECTION_OUT, GPIO_VALUE_HIGH},
  // NIC_FULL_PWR_PG, GPIOC5 (837)
  [GPIO_NIC_FULL_PWR_PG] =
  {"NIC_FULL_PWR_PG", "GPIOC5", GPIO_DIRECTION_IN, GPIO_VALUE_INVALID},
  // BOARD_REV_ID0, GPIOH0 (872)
  [GPIO_BOARD_REV_ID0] =
  {"BOARD_REV_ID0", "GPIOH0", GPIO_DIRECTION_IN, GPIO_VALUE_INVALID},
  // BOARD_REV_ID1, GPIOH1 (873)
  [GPIO_BOARD_REV_ID1] =
  {"BOARD_REV_ID1", "GPIOH1", GPIO_DIRECTION_IN, GPIO_VALUE_INVALID},
  // BOARD_REV_ID2, GPIOH2 (874)
  [GPIO_BOARD_REV_ID2] =
  {"BOARD_REV_ID2", "GPIOH2", GPIO_DIRECTION_IN, GPIO_VALUE_INVALID},
  // EN_ASD_DEBUG, GPIOI5 (885)
  [GPIO_EN_ASD_DEBUG] =
  {"EN_ASD_DEBUG", "GPIOI5", GPIO_DIRECTION_IN, GPIO_VALUE_INVALID},
  // DEBUG_RST_BTN_N, GPIOI7 (887)
  [GPIO_DEBUG_RST_BTN_N] =
  {"DEBUG_RST_BTN_N", "GPIOI7", GPIO_DIRECTION_IN, GPIO_VALUE_INVALID},
  // E1S_1_P3V3_PG_R, GPIOL6 (910)
  [GPIO_E1S_1_P3V3_PG_R] =
  {"E1S_1_P3V3_PG_R", "GPIOL6", GPIO_DIRECTION_IN, GPIO_VALUE_INVALID},
  // E1S_2_P3V3_PG_R, GPIOL7 (911)
  [GPIO_E1S_2_P3V3_PG_R] =
  {"E1S_2_P3V3_PG_R", "GPIOL7", GPIO_DIRECTION_IN, GPIO_VALUE_INVALID},
  // BMC_FPGA_UART_SEL0_R, GPIOM0 (912)
  [GPIO_BMC_FPGA_UART_SEL0_R] =
  {"BMC_FPGA_UART_SEL0_R", "GPIOM0", GPIO_DIRECTION_IN, GPIO_VALUE_INVALID},
  // BMC_FPGA_UART_SEL1_R, GPIOM1 (913)
  [GPIO_BMC_FPGA_UART_SEL1_R] =
  {"BMC_FPGA_UART_SEL1_R", "GPIOM1", GPIO_DIRECTION_IN, GPIO_VALUE_INVALID},
  // BMC_FPGA_UART_SEL2_R, GPIOM2 (914)
  [GPIO_BMC_FPGA_UART_SEL2_R] =
  {"BMC_FPGA_UART_SEL2_R", "GPIOM2", GPIO_DIRECTION_IN, GPIO_VALUE_INVALID},
  // BMC_FPGA_UART_SEL3_R, GPIOM3 (915)
  [GPIO_BMC_FPGA_UART_SEL3_R] =
  {"BMC_FPGA_UART_SEL3_R", "GPIOM3", GPIO_DIRECTION_IN, GPIO_VALUE_INVALID},
  // DEBUG_BMC_UART_SEL_R, GPIOM4 (916)
  [GPIO_DEBUG_BMC_UART_SEL_R] =
  {"DEBUG_BMC_UART_SEL_R", "GPIOM4", GPIO_DIRECTION_IN, GPIO_VALUE_INVALID},
  // DEBUG_GPIO_BMC_1, GPION0 (920)
  [GPIO_DEBUG_PWR_BTN_N] =
  {"DEBUG_PWR_BTN_N", "GPION0", GPIO_DIRECTION_IN, GPIO_VALUE_INVALID},
  // DEBUG_GPIO_BMC_2, GPION1 (921)
  [GPIO_DEBUG_GPIO_BMC_2] =
  {"DEBUG_GPIO_BMC_2", "GPION1", GPIO_DIRECTION_IN, GPIO_VALUE_INVALID},
  // DEBUG_GPIO_BMC_3, GPION2 (922)
  [GPIO_DEBUG_GPIO_BMC_3] =
  {"DEBUG_GPIO_BMC_3", "GPION2", GPIO_DIRECTION_IN, GPIO_VALUE_INVALID},
  // DEBUG_GPIO_BMC_4, GPION3 (923)
  [GPIO_DEBUG_GPIO_BMC_4] =
  {"DEBUG_GPIO_BMC_4", "GPION3", GPIO_DIRECTION_IN, GPIO_VALUE_INVALID},
  // DEBUG_GPIO_BMC_5, GPION4 (924)
  [GPIO_DEBUG_GPIO_BMC_5] =
  {"DEBUG_GPIO_BMC_5", "GPION4", GPIO_DIRECTION_IN, GPIO_VALUE_INVALID},
  // DEBUG_GPIO_BMC_6, GPION5 (925)
  [GPIO_DEBUG_GPIO_BMC_6] =
  {"DEBUG_GPIO_BMC_6", "GPION5", GPIO_DIRECTION_IN, GPIO_VALUE_INVALID},
  // USB_OC_N1, GPIOO3 (931)
  [GPIO_USB_OC_N1] =
  {"USB_OC_N1", "GPIOO3", GPIO_DIRECTION_IN, GPIO_VALUE_INVALID},
  // SCC_I2C_EN_R, GPIOO4 (932)
  [GPIO_SCC_I2C_EN_R] =
  {"SCC_I2C_EN_R", "GPIOO4", GPIO_DIRECTION_OUT, GPIO_VALUE_LOW},
  // BMC_READY_R, GPIOO5 (933)
  [GPIO_BMC_READY_R] =
  {"BMC_READY_R", "GPIOO5", GPIO_DIRECTION_OUT, GPIO_VALUE_HIGH},
  // LED_POSTCODE_0, GPIOO7 (935)
  [GPIO_LED_POSTCODE_0] =
  {"LED_POSTCODE_0", "GPIOO7", GPIO_DIRECTION_OUT, GPIO_VALUE_HIGH},
  // LED_POSTCODE_1, GPIOP0 (936)
  [GPIO_LED_POSTCODE_1] =
  {"LED_POSTCODE_1", "GPIOP0", GPIO_DIRECTION_OUT, GPIO_VALUE_HIGH},
  // LED_POSTCODE_2, GPIOP1 (937)
  [GPIO_LED_POSTCODE_2] =
  {"LED_POSTCODE_2", "GPIOP1", GPIO_DIRECTION_OUT, GPIO_VALUE_HIGH},
  // LED_POSTCODE_3, GPIOP2 (938)
  [GPIO_LED_POSTCODE_3] =
  {"LED_POSTCODE_3", "GPIOP2", GPIO_DIRECTION_OUT, GPIO_VALUE_HIGH},
  // LED_POSTCODE_4, GPIOP3 (939)
  [GPIO_LED_POSTCODE_4] =
  {"LED_POSTCODE_4", "GPIOP3", GPIO_DIRECTION_OUT, GPIO_VALUE_HIGH},
  // LED_POSTCODE_5, GPIOP4 (940)
  [GPIO_LED_POSTCODE_5] =
  {"LED_POSTCODE_5", "GPIOP4", GPIO_DIRECTION_OUT, GPIO_VALUE_HIGH},
  // LED_POSTCODE_6, GPIOP5 (941)
  [GPIO_LED_POSTCODE_6] =
  {"LED_POSTCODE_6", "GPIOP5", GPIO_DIRECTION_OUT, GPIO_VALUE_HIGH},
  // LED_POSTCODE_7, GPIOP6 (942)
  [GPIO_LED_POSTCODE_7] =
  {"LED_POSTCODE_7", "GPIOP6", GPIO_DIRECTION_OUT, GPIO_VALUE_HIGH},
  // BMC_LOC_HEARTBEAT_R, GPIOQ1 (945)
  [GPIO_BMC_LOC_HEARTBEAT_R] =
  {"BMC_LOC_HEARTBEAT_R", "GPIOQ1", GPIO_DIRECTION_OUT, GPIO_VALUE_HIGH},
  // BIC_READY_IN, GPIOQ6 (950)
  [GPIO_BIC_READY_IN] =
  {"BIC_READY_IN", "GPIOQ6", GPIO_DIRECTION_IN, GPIO_VALUE_INVALID},
  // COMP_STBY_PG_IN, GPIOQ7 (951)
  [GPIO_COMP_STBY_PG_IN] =
  {"COMP_STBY_PG_IN", "GPIOQ7", GPIO_DIRECTION_IN, GPIO_VALUE_INVALID},
  // UIC_LOC_TYPE_IN, GPIOR1 (953)
  [GPIO_UIC_LOC_TYPE_IN] =
  {"UIC_LOC_TYPE_IN", "GPIOR1", GPIO_DIRECTION_IN, GPIO_VALUE_INVALID},
  // UIC_RMT_TYPE_IN, GPIOR2 (954)
  [GPIO_UIC_RMT_TYPE_IN] =
  {"UIC_RMT_TYPE_IN", "GPIOR2", GPIO_DIRECTION_IN, GPIO_VALUE_INVALID},
  // BMC_COMP_PWR_EN_R, GPIOR4 (956)
  [GPIO_BMC_COMP_PWR_EN_R] =
  {"BMC_COMP_PWR_EN_R", "GPIOR4", GPIO_DIRECTION_IN, GPIO_VALUE_INVALID},
  // EXT_MINISAS_INS_OR_N_IN, GPIOR6 (958)
  [GPIO_EXT_MINISAS_INS_OR_N_IN] =
  {"EXT_MINISAS_INS_OR_N_IN", "GPIOR6", GPIO_DIRECTION_IN, GPIO_VALUE_INVALID},
  // NIC_PRSNTB3_N, GPIOS0 (960)
  [GPIO_NIC_PRSNTB3_N] =
  {"NIC_PRSNTB3_N", "GPIOS0", GPIO_DIRECTION_IN, GPIO_VALUE_INVALID},
  // FM_BMC_TPM_PRSNT_N, GPIOS2 (962)
  [GPIO_FM_BMC_TPM_PRSNT_N] =
  {"FM_BMC_TPM_PRSNT_N", "GPIOS2", GPIO_DIRECTION_IN, GPIO_VALUE_INVALID},
  // DEBUG_CARD_PRSNT_N, GPIOS3 (963)
  [GPIO_DEBUG_CARD_PRSNT_N] =
  {"DEBUG_CARD_PRSNT_N", "GPIOS3", GPIO_DIRECTION_IN, GPIO_VALUE_INVALID},
  // BMC_RST_BTN_N_R, GPIOV0 (984)
  [GPIO_BMC_RST_BTN_N_R] =
  {"BMC_RST_BTN_N_R", "GPIOV0", GPIO_DIRECTION_OUT, GPIO_VALUE_HIGH},
  // PCIE_COMP_UIC_RST_N, GPIOV1 (985)
  [GPIO_PCIE_COMP_UIC_RST_N] =
  {"PCIE_COMP_UIC_RST_N", "GPIOV1", GPIO_DIRECTION_IN, GPIO_VALUE_INVALID},
  // BMC_COMP_SYS_RST_N_R, GPIOV2 (986)
  [GPIO_BMC_COMP_SYS_RST_N_R] =
  {"BMC_COMP_SYS_RST_N_R", "GPIOV2", GPIO_DIRECTION_OUT, GPIO_VALUE_HIGH},
  // BMC_PWRGD_NIC, GPIOV3 (987)
  [GPIO_BMC_PWRGD_NIC] =
  {"BMC_PWRGD_NIC", "GPIOV3", GPIO_DIRECTION_IN, GPIO_VALUE_INVALID},
  // BMC_LED_STATUS_BLUE_EN_R, GPIOV4 (988)
  [GPIO_BMC_LED_STATUS_BLUE_EN_R] =
  {"BMC_LED_STATUS_BLUE_EN_R", "GPIOV4", GPIO_DIRECTION_OUT, GPIO_VALUE_LOW},
  // BMC_LED_STATUS_YELLOW_EN_R, GPIOV5 (989)
  [GPIO_BMC_LED_STATUS_YELLOW_EN_R] =
  {"BMC_LED_STATUS_YELLOW_EN_R", "GPIOV5", GPIO_DIRECTION_OUT, GPIO_VALUE_LOW},
  // BMC_LED_PWR_BTN_EN_R, GPIOV6 (990)
  [GPIO_BMC_LED_PWR_BTN_EN_R] =
  {"BMC_LED_PWR_BTN_EN_R", "GPIOV6", GPIO_DIRECTION_OUT, GPIO_VALUE_HIGH},
  // LAST
  {NULL, NULL, GPIO_DIRECTION_INVALID, GPIO_VALUE_INVALID}
};

const char *
fbgc_get_gpio_name(uint8_t gpio) {
  if (gpio < MAX_GPIO_EXPANDER_GPIO_PINS) {
    return gpio_expander_gpio_table[gpio].shadow_name;
  } else if (gpio < MAX_GPIO_PINS) {
    return bmc_gpio_table[gpio].shadow_name;
  } else {
    syslog(LOG_WARNING, "%s() Invalid gpio number: %u\n", __func__, gpio);
    return "";
  }
}
