# ",/usr/bin/env python,
# ,
# Copyright 2018-present Facebook. All Rights Reserved.,
# ,
# This program file is free software; you can redistribute it and/or modify it,
# under the terms of the GNU General Public License as published by the,
# Free Software Foundation; version 2 of the License.,
# ,
# This program is distributed in the hope that it will be useful, but WITHOUT,
# ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or,
# FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License,
# for more details.,
# ,
# You should have received a copy of the GNU General Public License,
# along with this program in a file named COPYING; if not, write to the,
# Free Software Foundation, Inc.,,
# 51 Franklin Street, Fifth Floor,,
# Boston, MA 02110-1301 USA,
# ,

REST_END_POINTS = {
    "/api": ["Description", "version"],
    "/api/bmc": [
        "Description",
        "MAC Addr",
        "Reset Reason",
        "Uptime",
        "uptime",
        "Memory Usage",
        "memory",
        "CPU Usage",
        "OpenBMC Version",
        "u-boot version",
        "kernel version",
        "TPM TCG version",
        "TPM FW version",
        "SPI0 Vendor",
        "SPI1 Vendor",
        "At-Scale-Debug Running",
        "vboot",
        "load-1",
        "load-5",
        "load-15",
        "open-fds",
    ],
    "/api/fans": [
        "Fan 0 Speed",
        "Fan 1 Speed",
        "Fan 2 Speed",
        "Fan 3 Speed",
        "Fan Mode",
        "FSCD Driver",
        "Sensor Fail",
        "Fan Fail",
    ],
    "/api/logs": ["Logs"],
    "/api/mezz": ["Description"],
    "/api/mezz/fruid": [
        "Board Mfg Date",
        "Board Mfg",
        "Board Product",
        "Board Serial",
        "Board Part Number",
        "Board FRU ID",
        "Board Custom Data 1",
        "Board Custom Data 2",
        "Product Manufacturer",
        "Product Name",
        "Product Part Number",
        "Product Version",
        "Product Serial",
        "Product Custom Data 1",
        "Product Custom Data 2",
    ],
    "/api/mezz/logs": ["Logs"],
    "/api/mezz/sensors": ["NIC_SENSOR_TEMP"],
    "/api/sensors": [
        "MB Inlet Temp",
        "MB Outlet Temp",
        "FRONT IO Temp",
        "PCH Temp",
        "SOC CPU Temp",
        "SOC Therm Margin",
        "SOC CPU TjMax",
        "CPU Package Pwr",
        "SOC DIMMA Temp",
        "SOC DIMMB Temp",
        "SOC DIMMC Temp",
        "SOC DIMMD Temp",
        "SOC DIMME Temp",
        "SOC DIMMF Temp",
        "SSD0 Temp",
        "HSC Temp",
        "VCCIN VR Temp",
        "VCCSA VR Temp",
        "VCCIO VR Temp",
        "3V3_STBY VR Temp",
        "VDDQ_ABC VR Temp",
        "VDDQ_DEF VR Temp",
        "P12V_STBY Vol",
        "P3V_BAT Vol",
        "P3V3_STBY Vol",
        "P1V05_PCH Vol",
        "PVNN_PCH Vol",
        "HSC Input Vol",
        "VCCIN VR Vol",
        "VCCSA VR Vol",
        "VCCIO VR Vol",
        "P3V3_STBY VR Vol",
        "VDDQ_ABC VR Vol",
        "VDDQ_DEF VR Vol",
        "HSC Output Cur",
        "VCCIN VR Cur",
        "VCCSA VR Cur",
        "VCCIO VR Cur",
        "P3V3_STBY VR Cur",
        "VDDQ_ABC VR Cur",
        "VDDQ_DEF VR Cur",
        "HSC Input Pwr",
        "HSC Input AvgPwr",
        "VCCIN VR Pout",
        "VCCSA VR Pout",
        "VCCIO VR Pout",
        "P3V3_STBY VRPout",
        "VDDQ_ABC VRPout",
        "VDDQ_DEF VRPout",
        "NIC_SENSOR_TEMP",
        "BMC_SENSOR_FAN0_TACH",
        "BMC_SENSOR_FAN1_TACH",
        "BMC_SENSOR_FAN2_TACH",
        "BMC_SENSOR_FAN3_TACH",
        "BMC_SENSOR_FAN4_TACH",
        "BMC_SENSOR_FAN5_TACH",
        "BMC_SENSOR_FAN6_TACH",
        "BMC_SENSOR_FAN7_TACH",
        "BMC_SENSOR_PWM0",
        "BMC_SENSOR_PWM1",
        "BMC_SENSOR_PWM2",
        "BMC_SENSOR_PWM3",
        "BMC_OUTLET_TEMP",
        "BMC_INLET_TEMP",
        "BMC_SENSOR_P5V",
        "BMC_SENSOR_P12V",
        "BMC_SENSOR_P3V3_STBY",
        "BMC_SENSOR_P1V15_STBY",
        "BMC_SENSOR_P1V2_STBY",
        "BMC_SENSOR_P2V5_STBY",
        "BMC_SENSOR_HSC_TEMP",
        "BMC_SENSOR_HSC_VIN",
        "BMC_SENSOR_HSC_PIN",
        "BMC_SENSOR_HSC_EIN",
        "BMC_SENSOR_HSC_IOUT",
        "BMC_SENSOR_HSC_PEAK_IOUT",
        "BMC_SENSOR_HSC_PEAK_PIN",
        "BMC_SENSOR_MEDUSA_VOUT",
        "BMC_SENSOR_MEDUSA_VIN",
        "BMC_SENSOR_MEDUSA_CURR",
        "BMC_SENSOR_MEDUSA_PWR",
        "BMC_SENSOR_MEDUSA_VDELTA",
        "BMC_SENSOR_PDB_DL_VDELTA",
        "BMC_SENSOR_PDB_BB_VDELTA",
        "BMC_SENSOR_CURR_LEAKAGE",
        "BMC_SENSOR_FAN_IOUT",
        "BMC_SENSOR_FAN_PWR",
        "BMC_SENSOR_NIC_P12V",
        "BMC_SENSOR_NIC_IOUT",
        "BMC_SENSOR_NIC_PWR",
        "SYSTEM_AIRFLOW",
    ],
    "/api/server1": ["Power status"],
    "/api/server1/bios": ["Description"],
    "/api/server1/bios/boot-order": ["Description"],
    "/api/server1/bios/boot-order/boot_mode": [
        "Boot Mode",
        "Note #1: Actions Format:",
        "Note #2: Boot Mode No.",
    ],
    "/api/server1/bios/boot-order/boot_order": [
        "Boot Order",
        "Note #1: Actions Format:",
        "Note #2: Boot Order No.",
    ],
    "/api/server1/bios/boot-order/clear_cmos": ["Clear CMOS Function"],
    "/api/server1/bios/boot-order/force_boot_bios_setup": [
        "Force Boot to BIOS Setup Function"
    ],
    "/api/server1/bios/plat-info": ["Platform Information"],
    "/api/server1/bios/postcode": ["POST Code"],
    "/api/server1/config": [
        "sysfw_ver_slot1",
        "pwr_server1_last_state",
        "slot1_por_cfg",
        "slot1_boot_order",
        "slot1_cpu_ppin",
    ],
    "/api/server1/fruid": [
        "Chassis Type",
        "Chassis Part Number",
        "Chassis Serial Number",
        "Chassis Custom Data 1",
        "Board Mfg Date",
        "Board Mfg",
        "Board Product",
        "Board Serial",
        "Board Part Number",
        "Board FRU ID",
        "Board Custom Data 1",
        "Board Custom Data 2",
        "Product Manufacturer",
        "Product Name",
        "Product Part Number",
        "Product Version",
        "Product Serial",
        "Product Asset Tag",
        "Product FRU ID",
        "Product Custom Data 1",
        "Product Custom Data 2",
    ],
    "/api/server1/logs": ["Logs"],
    "/api/server1/sensors": [
        "MB Inlet Temp",
        "MB Outlet Temp",
        "FRONT IO Temp",
        "PCH Temp",
        "SOC CPU Temp",
        "SOC Therm Margin",
        "SOC CPU TjMax",
        "CPU Package Pwr",
        "SOC DIMMA Temp",
        "SOC DIMMB Temp",
        "SOC DIMMC Temp",
        "SOC DIMMD Temp",
        "SOC DIMME Temp",
        "SOC DIMMF Temp",
        "SSD0 Temp",
        "HSC Temp",
        "VCCIN VR Temp",
        "VCCSA VR Temp",
        "VCCIO VR Temp",
        "3V3_STBY VR Temp",
        "VDDQ_ABC VR Temp",
        "VDDQ_DEF VR Temp",
        "P12V_STBY Vol",
        "P3V_BAT Vol",
        "P3V3_STBY Vol",
        "P1V05_PCH Vol",
        "PVNN_PCH Vol",
        "HSC Input Vol",
        "VCCIN VR Vol",
        "VCCSA VR Vol",
        "VCCIO VR Vol",
        "P3V3_STBY VR Vol",
        "VDDQ_ABC VR Vol",
        "VDDQ_DEF VR Vol",
        "HSC Output Cur",
        "VCCIN VR Cur",
        "VCCSA VR Cur",
        "VCCIO VR Cur",
        "P3V3_STBY VR Cur",
        "VDDQ_ABC VR Cur",
        "VDDQ_DEF VR Cur",
        "HSC Input Pwr",
        "HSC Input AvgPwr",
        "VCCIN VR Pout",
        "VCCSA VR Pout",
        "VCCIO VR Pout",
        "P3V3_STBY VRPout",
        "VDDQ_ABC VRPout",
        "VDDQ_DEF VRPout",
    ],
    "/api/server2": ["Power status"],
    "/api/server2/bios": ["Description"],
    "/api/server2/bios/boot-order": ["Description"],
    "/api/server2/bios/boot-order/boot_mode": [
        "Boot Mode",
        "Note #1: Actions Format:",
        "Note #2: Boot Mode No.",
    ],
    "/api/server2/bios/boot-order/boot_order": [
        "Boot Order",
        "Note #1: Actions Format:",
        "Note #2: Boot Order No.",
    ],
    "/api/server2/bios/boot-order/clear_cmos": ["Clear CMOS Function"],
    "/api/server2/bios/boot-order/force_boot_bios_setup": [
        "Force Boot to BIOS Setup Function"
    ],
    "/api/server2/bios/plat-info": ["Platform Information"],
    "/api/server2/bios/postcode": ["POST Code"],
    "/api/server2/config": [
        "sysfw_ver_slot2",
        "pwr_server2_last_state",
        "slot2_por_cfg",
        "slot2_boot_order",
        "slot2_cpu_ppin",
    ],
    "/api/server2/fruid": [
        "Chassis Type",
        "Chassis Part Number",
        "Chassis Serial Number",
        "Chassis Custom Data 1",
        "Board Mfg Date",
        "Board Mfg",
        "Board Product",
        "Board Serial",
        "Board Part Number",
        "Board FRU ID",
        "Board Custom Data 1",
        "Board Custom Data 2",
        "Product Manufacturer",
        "Product Name",
        "Product Part Number",
        "Product Version",
        "Product Serial",
        "Product Asset Tag",
        "Product FRU ID",
        "Product Custom Data 1",
        "Product Custom Data 2",
    ],
    "/api/server2/logs": ["Logs"],
    "/api/server2/sensors": [
        "MB Inlet Temp",
        "MB Outlet Temp",
        "FRONT IO Temp",
        "PCH Temp",
        "SOC CPU Temp",
        "SOC Therm Margin",
        "SOC CPU TjMax",
        "CPU Package Pwr",
        "SOC DIMMA Temp",
        "SOC DIMMB Temp",
        "SOC DIMMC Temp",
        "SOC DIMMD Temp",
        "SOC DIMME Temp",
        "SOC DIMMF Temp",
        "SSD0 Temp",
        "HSC Temp",
        "VCCIN VR Temp",
        "VCCSA VR Temp",
        "VCCIO VR Temp",
        "3V3_STBY VR Temp",
        "VDDQ_ABC VR Temp",
        "VDDQ_DEF VR Temp",
        "P12V_STBY Vol",
        "P3V_BAT Vol",
        "P3V3_STBY Vol",
        "P1V05_PCH Vol",
        "PVNN_PCH Vol",
        "HSC Input Vol",
        "VCCIN VR Vol",
        "VCCSA VR Vol",
        "VCCIO VR Vol",
        "P3V3_STBY VR Vol",
        "VDDQ_ABC VR Vol",
        "VDDQ_DEF VR Vol",
        "HSC Output Cur",
        "VCCIN VR Cur",
        "VCCSA VR Cur",
        "VCCIO VR Cur",
        "P3V3_STBY VR Cur",
        "VDDQ_ABC VR Cur",
        "VDDQ_DEF VR Cur",
        "HSC Input Pwr",
        "HSC Input AvgPwr",
        "VCCIN VR Pout",
        "VCCSA VR Pout",
        "VCCIO VR Pout",
        "P3V3_STBY VRPout",
        "VDDQ_ABC VRPout",
        "VDDQ_DEF VRPout",
    ],
    "/api/server3": ["Power status"],
    "/api/server3/bios": ["Description"],
    "/api/server3/bios/boot-order": ["Description"],
    "/api/server3/bios/boot-order/boot_mode": [
        "Boot Mode",
        "Note #1: Actions Format:",
        "Note #2: Boot Mode No.",
    ],
    "/api/server3/bios/boot-order/boot_order": [
        "Boot Order",
        "Note #1: Actions Format:",
        "Note #2: Boot Order No.",
    ],
    "/api/server3/bios/boot-order/clear_cmos": ["Clear CMOS Function"],
    "/api/server3/bios/boot-order/force_boot_bios_setup": [
        "Force Boot to BIOS Setup Function"
    ],
    "/api/server3/bios/plat-info": ["Platform Information"],
    "/api/server3/bios/postcode": ["POST Code"],
    "/api/server3/config": [
        "sysfw_ver_slot3",
        "pwr_server3_last_state",
        "slot3_por_cfg",
        "slot3_boot_order",
        "slot3_cpu_ppin",
    ],
    "/api/server3/fruid": [
        "Chassis Type",
        "Chassis Part Number",
        "Chassis Serial Number",
        "Chassis Custom Data 1",
        "Board Mfg Date",
        "Board Mfg",
        "Board Product",
        "Board Serial",
        "Board Part Number",
        "Board FRU ID",
        "Board Custom Data 1",
        "Board Custom Data 2",
        "Product Manufacturer",
        "Product Name",
        "Product Part Number",
        "Product Version",
        "Product Serial",
        "Product Asset Tag",
        "Product FRU ID",
        "Product Custom Data 1",
        "Product Custom Data 2",
    ],
    "/api/server3/logs": ["Logs"],
    "/api/server3/sensors": [
        "MB Inlet Temp",
        "MB Outlet Temp",
        "FRONT IO Temp",
        "PCH Temp",
        "SOC CPU Temp",
        "SOC Therm Margin",
        "SOC CPU TjMax",
        "CPU Package Pwr",
        "SOC DIMMA Temp",
        "SOC DIMMB Temp",
        "SOC DIMMC Temp",
        "SOC DIMMD Temp",
        "SOC DIMME Temp",
        "SOC DIMMF Temp",
        "SSD0 Temp",
        "HSC Temp",
        "VCCIN VR Temp",
        "VCCSA VR Temp",
        "VCCIO VR Temp",
        "3V3_STBY VR Temp",
        "VDDQ_ABC VR Temp",
        "VDDQ_DEF VR Temp",
        "P12V_STBY Vol",
        "P3V_BAT Vol",
        "P3V3_STBY Vol",
        "P1V05_PCH Vol",
        "PVNN_PCH Vol",
        "HSC Input Vol",
        "VCCIN VR Vol",
        "VCCSA VR Vol",
        "VCCIO VR Vol",
        "P3V3_STBY VR Vol",
        "VDDQ_ABC VR Vol",
        "VDDQ_DEF VR Vol",
        "HSC Output Cur",
        "VCCIN VR Cur",
        "VCCSA VR Cur",
        "VCCIO VR Cur",
        "P3V3_STBY VR Cur",
        "VDDQ_ABC VR Cur",
        "VDDQ_DEF VR Cur",
        "HSC Input Pwr",
        "HSC Input AvgPwr",
        "VCCIN VR Pout",
        "VCCSA VR Pout",
        "VCCIO VR Pout",
        "P3V3_STBY VRPout",
        "VDDQ_ABC VRPout",
        "VDDQ_DEF VRPout",
    ],
    "/api/server4": ["Power status"],
    "/api/server4/bios": ["Description"],
    "/api/server4/bios/boot-order": ["Description"],
    "/api/server4/bios/boot-order/boot_mode": [
        "Boot Mode",
        "Note #1: Actions Format:",
        "Note #2: Boot Mode No.",
    ],
    "/api/server4/bios/boot-order/boot_order": [
        "Boot Order",
        "Note #1: Actions Format:",
        "Note #2: Boot Order No.",
    ],
    "/api/server4/bios/boot-order/clear_cmos": ["Clear CMOS Function"],
    "/api/server4/bios/boot-order/force_boot_bios_setup": [
        "Force Boot to BIOS Setup Function"
    ],
    "/api/server4/bios/plat-info": ["Platform Information"],
    "/api/server4/bios/postcode": ["POST Code"],
    "/api/server4/config": [
        "sysfw_ver_slot4",
        "pwr_server4_last_state",
        "slot4_por_cfg",
        "slot4_boot_order",
        "slot4_cpu_ppin",
    ],
    "/api/server4/fruid": [
        "Chassis Type",
        "Chassis Part Number",
        "Chassis Serial Number",
        "Chassis Custom Data 1",
        "Board Mfg Date",
        "Board Mfg",
        "Board Product",
        "Board Serial",
        "Board Part Number",
        "Board FRU ID",
        "Board Custom Data 1",
        "Board Custom Data 2",
        "Product Manufacturer",
        "Product Name",
        "Product Part Number",
        "Product Version",
        "Product Serial",
        "Product Asset Tag",
        "Product FRU ID",
        "Product Custom Data 1",
        "Product Custom Data 2",
    ],
    "/api/server4/logs": ["Logs"],
    "/api/server4/sensors": [
        "MB Inlet Temp",
        "MB Outlet Temp",
        "FRONT IO Temp",
        "PCH Temp",
        "SOC CPU Temp",
        "SOC Therm Margin",
        "SOC CPU TjMax",
        "CPU Package Pwr",
        "SOC DIMMA Temp",
        "SOC DIMMB Temp",
        "SOC DIMMC Temp",
        "SOC DIMMD Temp",
        "SOC DIMME Temp",
        "SOC DIMMF Temp",
        "SSD0 Temp",
        "HSC Temp",
        "VCCIN VR Temp",
        "VCCSA VR Temp",
        "VCCIO VR Temp",
        "3V3_STBY VR Temp",
        "VDDQ_ABC VR Temp",
        "VDDQ_DEF VR Temp",
        "P12V_STBY Vol",
        "P3V_BAT Vol",
        "P3V3_STBY Vol",
        "P1V05_PCH Vol",
        "PVNN_PCH Vol",
        "HSC Input Vol",
        "VCCIN VR Vol",
        "VCCSA VR Vol",
        "VCCIO VR Vol",
        "P3V3_STBY VR Vol",
        "VDDQ_ABC VR Vol",
        "VDDQ_DEF VR Vol",
        "HSC Output Cur",
        "VCCIN VR Cur",
        "VCCSA VR Cur",
        "VCCIO VR Cur",
        "P3V3_STBY VR Cur",
        "VDDQ_ABC VR Cur",
        "VDDQ_DEF VR Cur",
        "HSC Input Pwr",
        "HSC Input AvgPwr",
        "VCCIN VR Pout",
        "VCCSA VR Pout",
        "VCCIO VR Pout",
        "P3V3_STBY VRPout",
        "VDDQ_ABC VRPout",
        "VDDQ_DEF VRPout",
    ],
    "/api/spb": ["Description"],
    "/api/spb/bmc": [
        "Description",
        "MAC Addr",
        "Reset Reason",
        "Uptime",
        "uptime",
        "Memory Usage",
        "memory",
        "CPU Usage",
        "OpenBMC Version",
        "u-boot version",
        "kernel version",
        "TPM TCG version",
        "TPM FW version",
        "SPI0 Vendor",
        "SPI1 Vendor",
        "At-Scale-Debug Running",
        "vboot",
        "load-1",
        "load-5",
        "load-15",
        "open-fds",
    ],
    "/api/spb/fans": [
        "Fan 0 Speed",
        "Fan 1 Speed",
        "Fan 2 Speed",
        "Fan 3 Speed",
        "Fan Mode",
        "FSCD Driver",
        "Sensor Fail",
        "Fan Fail",
    ],
    "/api/spb/fruid": [
        "Board Mfg Date",
        "Board Mfg",
        "Board Product",
        "Board Serial",
        "Board Part Number",
        "Board FRU ID",
        "Board Custom Data 1",
        "Board Custom Data 2",
        "Product Manufacturer",
        "Product Name",
        "Product Part Number",
        "Product Version",
        "Product Serial",
        "Product Asset Tag",
        "Product FRU ID",
        "Product Custom Data 1",
        "Product Custom Data 2",
    ],
    "/api/spb/logs": ["Logs"],
    "/api/spb/sensors": [
        "BMC_SENSOR_FAN0_TACH",
        "BMC_SENSOR_FAN1_TACH",
        "BMC_SENSOR_FAN2_TACH",
        "BMC_SENSOR_FAN3_TACH",
        "BMC_SENSOR_FAN4_TACH",
        "BMC_SENSOR_FAN5_TACH",
        "BMC_SENSOR_FAN6_TACH",
        "BMC_SENSOR_FAN7_TACH",
        "BMC_SENSOR_PWM0",
        "BMC_SENSOR_PWM1",
        "BMC_SENSOR_PWM2",
        "BMC_SENSOR_PWM3",
        "BMC_OUTLET_TEMP",
        "BMC_INLET_TEMP",
        "BMC_SENSOR_P5V",
        "BMC_SENSOR_P12V",
        "BMC_SENSOR_P3V3_STBY",
        "BMC_SENSOR_P1V15_STBY",
        "BMC_SENSOR_P1V2_STBY",
        "BMC_SENSOR_P2V5_STBY",
        "BMC_SENSOR_HSC_TEMP",
        "BMC_SENSOR_HSC_VIN",
        "BMC_SENSOR_HSC_PIN",
        "BMC_SENSOR_HSC_EIN",
        "BMC_SENSOR_HSC_IOUT",
        "BMC_SENSOR_HSC_PEAK_IOUT",
        "BMC_SENSOR_HSC_PEAK_PIN",
        "BMC_SENSOR_MEDUSA_VOUT",
        "BMC_SENSOR_MEDUSA_VIN",
        "BMC_SENSOR_MEDUSA_CURR",
        "BMC_SENSOR_MEDUSA_PWR",
        "BMC_SENSOR_MEDUSA_VDELTA",
        "BMC_SENSOR_PDB_DL_VDELTA",
        "BMC_SENSOR_PDB_BB_VDELTA",
        "BMC_SENSOR_CURR_LEAKAGE",
        "BMC_SENSOR_FAN_IOUT",
        "BMC_SENSOR_FAN_PWR",
        "BMC_SENSOR_NIC_P12V",
        "BMC_SENSOR_NIC_IOUT",
        "BMC_SENSOR_NIC_PWR",
    ],
}
