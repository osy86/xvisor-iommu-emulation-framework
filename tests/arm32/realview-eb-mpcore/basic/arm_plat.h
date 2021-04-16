/**
 * Copyright (c) 2013 Anup Patel.
 * All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 * @file arm_plat.h
 * @author Anup Patel (anup@brainfault.org)
 * @brief ARM platform configuration
 */
#ifndef _ARM_PLAT_H__
#define _ARM_PLAT_H__

/*
 * Peripheral addresses
 */
#define REALVIEW_UART0_BASE		0x10009000	/* UART 0 */
#define REALVIEW_UART1_BASE		0x1000A000	/* UART 1 */
#define REALVIEW_UART2_BASE		0x1000B000	/* UART 2 */
#define REALVIEW_UART3_BASE		0x1000C000	/* UART 3 */
#define REALVIEW_SSP_BASE		0x1000D000	/* Synchronous Serial Port */
#define REALVIEW_WATCHDOG0_BASE		0x1000F000	/* Watchdog 0 */
#define REALVIEW_WATCHDOG_BASE		0x10010000	/* watchdog interface */
#define REALVIEW_TIMER0_1_BASE		0x10011000	/* Timer 0 and 1 */
#define REALVIEW_TIMER2_3_BASE		0x10012000	/* Timer 2 and 3 */
#define REALVIEW_GPIO0_BASE		0x10013000	/* GPIO port 0 */
#define REALVIEW_RTC_BASE		0x10017000	/* Real Time Clock */
#define REALVIEW_TIMER4_5_BASE		0x10018000	/* Timer 4/5 */
#define REALVIEW_TIMER6_7_BASE		0x10019000	/* Timer 6/7 */
#define REALVIEW_SCTL_BASE		0x1001A000	/* System Controller */
#define REALVIEW_CLCD_BASE		0x10020000	/* CLCD */
#define REALVIEW_ONB_SRAM_BASE		0x10060000	/* On-board SRAM */
#define REALVIEW_DMC_BASE		0x100E0000	/* DMC configuration */
#define REALVIEW_SMC_BASE		0x100E1000	/* SMC configuration */
#define REALVIEW_CAN_BASE		0x100E2000	/* CAN bus */
#define REALVIEW_GIC_CPU_BASE		0x10100100	/* Generic interrupt controller CPU interface */
#define REALVIEW_FLASH0_BASE		0x40000000
#define REALVIEW_FLASH0_SIZE		SZ_64M
#define REALVIEW_FLASH1_BASE		0x44000000
#define REALVIEW_FLASH1_SIZE		SZ_64M
#define REALVIEW_ETH_BASE		0x4E000000	/* Ethernet */
#define REALVIEW_USB_BASE		0x4F000000	/* USB */
#define REALVIEW_GIC_DIST_BASE		0x10101000	/* Generic interrupt controller distributor */
#define REALVIEW_LT_BASE		0xC0000000	/* Logic Tile expansion */
#define REALVIEW_SDRAM6_BASE		0x70000000	/* SDRAM bank 6 256MB */
#define REALVIEW_SDRAM7_BASE		0x80000000	/* SDRAM bank 7 256MB */

#define REALVIEW_SYS_PLD_CTRL1		0x74

/*
 * PCI regions
 */
#define REALVIEW_PCI_BASE		0x90040000	/* PCI-X Unit base */
#define REALVIEW_PCI_IO_BASE		0x90050000	/* IO Region on AHB */
#define REALVIEW_PCI_MEM_BASE		0xA0000000	/* MEM Region on AHB */

#define REALVIEW_PCI_BASE_SIZE		0x10000	/* 16 Kb */
#define REALVIEW_PCI_IO_SIZE		0x1000	/* 4 Kb */
#define REALVIEW_PCI_MEM_SIZE		0x20000000	/* 512 MB */

/*
 * Irqs
 */
#define IRQ_GIC_START			29

#define IRQ_EB_GIC_START		32

#define IRQ_EB11MP_AACI			(IRQ_EB_GIC_START + 0)
#define IRQ_EB11MP_TIMER0_1		(IRQ_EB_GIC_START + 1)
#define IRQ_EB11MP_TIMER2_3		(IRQ_EB_GIC_START + 2)
#define IRQ_EB11MP_USB			(IRQ_EB_GIC_START + 3)
#define IRQ_EB11MP_UART0		(IRQ_EB_GIC_START + 4)
#define IRQ_EB11MP_UART1		(IRQ_EB_GIC_START + 5)
#define IRQ_EB11MP_RTC			(IRQ_EB_GIC_START + 6)
#define IRQ_EB11MP_KMI0			(IRQ_EB_GIC_START + 7)
#define IRQ_EB11MP_KMI1			(IRQ_EB_GIC_START + 8)
#define IRQ_EB11MP_ETH			(IRQ_EB_GIC_START + 9)
#define IRQ_EB11MP_EB_IRQ1		(IRQ_EB_GIC_START + 10)		/* main GIC */
#define IRQ_EB11MP_EB_IRQ2		(IRQ_EB_GIC_START + 11)		/* tile GIC */
#define IRQ_EB11MP_EB_FIQ1		(IRQ_EB_GIC_START + 12)		/* main GIC */
#define IRQ_EB11MP_EB_FIQ2		(IRQ_EB_GIC_START + 13)		/* tile GIC */
#define IRQ_EB11MP_MMCI0A		(IRQ_EB_GIC_START + 14)
#define IRQ_EB11MP_MMCI0B		(IRQ_EB_GIC_START + 15)

#define IRQ_EB11MP_PMU_CPU0		(IRQ_EB_GIC_START + 17)
#define IRQ_EB11MP_PMU_CPU1		(IRQ_EB_GIC_START + 18)
#define IRQ_EB11MP_PMU_CPU2		(IRQ_EB_GIC_START + 19)
#define IRQ_EB11MP_PMU_CPU3		(IRQ_EB_GIC_START + 20)
#define IRQ_EB11MP_PMU_SCU0		(IRQ_EB_GIC_START + 21)
#define IRQ_EB11MP_PMU_SCU1		(IRQ_EB_GIC_START + 22)
#define IRQ_EB11MP_PMU_SCU2		(IRQ_EB_GIC_START + 23)
#define IRQ_EB11MP_PMU_SCU3		(IRQ_EB_GIC_START + 24)
#define IRQ_EB11MP_PMU_SCU4		(IRQ_EB_GIC_START + 25)
#define IRQ_EB11MP_PMU_SCU5		(IRQ_EB_GIC_START + 26)
#define IRQ_EB11MP_PMU_SCU6		(IRQ_EB_GIC_START + 27)
#define IRQ_EB11MP_PMU_SCU7		(IRQ_EB_GIC_START + 28)

#define IRQ_EB11MP_L220_EVENT		(IRQ_EB_GIC_START + 29)
#define IRQ_EB11MP_L220_SLAVE		(IRQ_EB_GIC_START + 30)
#define IRQ_EB11MP_L220_DECODE		(IRQ_EB_GIC_START + 31)

/*
 * The 11MPcore tile leaves the following unconnected.
 */
#define IRQ_EB11MP_UART2	0
#define IRQ_EB11MP_UART3	0
#define IRQ_EB11MP_CLCD		0
#define IRQ_EB11MP_DMA		0
#define IRQ_EB11MP_WDOG		0
#define IRQ_EB11MP_GPIO0	0
#define IRQ_EB11MP_GPIO1	0
#define IRQ_EB11MP_GPIO2	0
#define IRQ_EB11MP_SCI		0
#define IRQ_EB11MP_SSP		0

#define NR_GIC_EB11MP		2

/*
 * Only define NR_IRQS if less than NR_IRQS_EB
 */
#define NR_IRQS_EB		(IRQ_EB_GIC_START + 96)

/*
 * Memory definitions
 */
#define REALVIEW_BOOT_ROM_LO          0x30000000	/* DoC Base (64Mb)... */
#define REALVIEW_BOOT_ROM_HI          0x30000000
#define REALVIEW_BOOT_ROM_BASE        REALVIEW_BOOT_ROM_HI	/*  Normal position */
#define REALVIEW_BOOT_ROM_SIZE        SZ_64M

#define REALVIEW_SSRAM_BASE	/* REALVIEW_SSMC_BASE ? */
#define REALVIEW_SSRAM_SIZE           SZ_2M

/* 
 *  SDRAM
 */
#define REALVIEW_SDRAM_BASE           0x00000000

/* 
 *  Logic expansion modules
 * 
 */

/* ------------------------------------------------------------------------
 *  RealView Registers
 * ------------------------------------------------------------------------
 * 
 */
#define REALVIEW_SYS_ID_OFFSET               0x00
#define REALVIEW_SYS_SW_OFFSET               0x04
#define REALVIEW_SYS_LED_OFFSET              0x08
#define REALVIEW_SYS_OSC0_OFFSET             0x0C

#define REALVIEW_SYS_OSC1_OFFSET             0x10
#define REALVIEW_SYS_OSC2_OFFSET             0x14
#define REALVIEW_SYS_OSC3_OFFSET             0x18
#define REALVIEW_SYS_OSC4_OFFSET             0x1C	/* OSC1 for RealView/AB */

#define REALVIEW_SYS_LOCK_OFFSET             0x20
#define REALVIEW_SYS_100HZ_OFFSET            0x24
#define REALVIEW_SYS_CFGDATA1_OFFSET         0x28
#define REALVIEW_SYS_CFGDATA2_OFFSET         0x2C
#define REALVIEW_SYS_FLAGS_OFFSET            0x30
#define REALVIEW_SYS_FLAGSSET_OFFSET         0x30
#define REALVIEW_SYS_FLAGSCLR_OFFSET         0x34
#define REALVIEW_SYS_NVFLAGS_OFFSET          0x38
#define REALVIEW_SYS_NVFLAGSSET_OFFSET       0x38
#define REALVIEW_SYS_NVFLAGSCLR_OFFSET       0x3C
#define REALVIEW_SYS_RESETCTL_OFFSET         0x40
#define REALVIEW_SYS_PCICTL_OFFSET           0x44
#define REALVIEW_SYS_MCI_OFFSET              0x48
#define REALVIEW_SYS_FLASH_OFFSET            0x4C
#define REALVIEW_SYS_CLCD_OFFSET             0x50
#define REALVIEW_SYS_CLCDSER_OFFSET          0x54
#define REALVIEW_SYS_BOOTCS_OFFSET           0x58
#define REALVIEW_SYS_24MHz_OFFSET            0x5C
#define REALVIEW_SYS_MISC_OFFSET             0x60
#define REALVIEW_SYS_IOSEL_OFFSET            0x70
#define REALVIEW_SYS_PROCID_OFFSET           0x84
#define REALVIEW_SYS_TEST_OSC0_OFFSET        0xC0
#define REALVIEW_SYS_TEST_OSC1_OFFSET        0xC4
#define REALVIEW_SYS_TEST_OSC2_OFFSET        0xC8
#define REALVIEW_SYS_TEST_OSC3_OFFSET        0xCC
#define REALVIEW_SYS_TEST_OSC4_OFFSET        0xD0

#define REALVIEW_SYS_BASE                    0x10000000
#define REALVIEW_SYS_ID                      (REALVIEW_SYS_BASE + REALVIEW_SYS_ID_OFFSET)
#define REALVIEW_SYS_SW                      (REALVIEW_SYS_BASE + REALVIEW_SYS_SW_OFFSET)
#define REALVIEW_SYS_LED                     (REALVIEW_SYS_BASE + REALVIEW_SYS_LED_OFFSET)
#define REALVIEW_SYS_OSC0                    (REALVIEW_SYS_BASE + REALVIEW_SYS_OSC0_OFFSET)
#define REALVIEW_SYS_OSC1                    (REALVIEW_SYS_BASE + REALVIEW_SYS_OSC1_OFFSET)

#define REALVIEW_SYS_LOCK                    (REALVIEW_SYS_BASE + REALVIEW_SYS_LOCK_OFFSET)
#define REALVIEW_SYS_100HZ                   (REALVIEW_SYS_BASE + REALVIEW_SYS_100HZ_OFFSET)
#define REALVIEW_SYS_CFGDATA1                (REALVIEW_SYS_BASE + REALVIEW_SYS_CFGDATA1_OFFSET)
#define REALVIEW_SYS_CFGDATA2                (REALVIEW_SYS_BASE + REALVIEW_SYS_CFGDATA2_OFFSET)
#define REALVIEW_SYS_FLAGS                   (REALVIEW_SYS_BASE + REALVIEW_SYS_FLAGS_OFFSET)
#define REALVIEW_SYS_FLAGSSET                (REALVIEW_SYS_BASE + REALVIEW_SYS_FLAGSSET_OFFSET)
#define REALVIEW_SYS_FLAGSCLR                (REALVIEW_SYS_BASE + REALVIEW_SYS_FLAGSCLR_OFFSET)
#define REALVIEW_SYS_NVFLAGS                 (REALVIEW_SYS_BASE + REALVIEW_SYS_NVFLAGS_OFFSET)
#define REALVIEW_SYS_NVFLAGSSET              (REALVIEW_SYS_BASE + REALVIEW_SYS_NVFLAGSSET_OFFSET)
#define REALVIEW_SYS_NVFLAGSCLR              (REALVIEW_SYS_BASE + REALVIEW_SYS_NVFLAGSCLR_OFFSET)
#define REALVIEW_SYS_RESETCTL                (REALVIEW_SYS_BASE + REALVIEW_SYS_RESETCTL_OFFSET)
#define REALVIEW_SYS_PCICTL                  (REALVIEW_SYS_BASE + REALVIEW_SYS_PCICTL_OFFSET)
#define REALVIEW_SYS_MCI                     (REALVIEW_SYS_BASE + REALVIEW_SYS_MCI_OFFSET)
#define REALVIEW_SYS_FLASH                   (REALVIEW_SYS_BASE + REALVIEW_SYS_FLASH_OFFSET)
#define REALVIEW_SYS_CLCD                    (REALVIEW_SYS_BASE + REALVIEW_SYS_CLCD_OFFSET)
#define REALVIEW_SYS_CLCDSER                 (REALVIEW_SYS_BASE + REALVIEW_SYS_CLCDSER_OFFSET)
#define REALVIEW_SYS_BOOTCS                  (REALVIEW_SYS_BASE + REALVIEW_SYS_BOOTCS_OFFSET)
#define REALVIEW_SYS_24MHz                   (REALVIEW_SYS_BASE + REALVIEW_SYS_24MHz_OFFSET)
#define REALVIEW_SYS_MISC                    (REALVIEW_SYS_BASE + REALVIEW_SYS_MISC_OFFSET)
#define REALVIEW_SYS_IOSEL                   (REALVIEW_SYS_BASE + REALVIEW_SYS_IOSEL_OFFSET)
#define REALVIEW_SYS_PROCID                  (REALVIEW_SYS_BASE + REALVIEW_SYS_PROCID_OFFSET)
#define REALVIEW_SYS_TEST_OSC0               (REALVIEW_SYS_BASE + REALVIEW_SYS_TEST_OSC0_OFFSET)
#define REALVIEW_SYS_TEST_OSC1               (REALVIEW_SYS_BASE + REALVIEW_SYS_TEST_OSC1_OFFSET)
#define REALVIEW_SYS_TEST_OSC2               (REALVIEW_SYS_BASE + REALVIEW_SYS_TEST_OSC2_OFFSET)
#define REALVIEW_SYS_TEST_OSC3               (REALVIEW_SYS_BASE + REALVIEW_SYS_TEST_OSC3_OFFSET)
#define REALVIEW_SYS_TEST_OSC4               (REALVIEW_SYS_BASE + REALVIEW_SYS_TEST_OSC4_OFFSET)

#define REALVIEW_SYS_CTRL_LED         (1 << 0)

/* ------------------------------------------------------------------------
 *  RealView control registers
 * ------------------------------------------------------------------------
 */

/* 
 * REALVIEW_IDFIELD
 *
 * 31:24 = manufacturer (0x41 = ARM)
 * 23:16 = architecture (0x08 = AHB system bus, ASB processor bus)
 * 15:12 = FPGA (0x3 = XVC600 or XVC600E)
 * 11:4  = build value
 * 3:0   = revision number (0x1 = rev B (AHB))
 */

/*
 * REALVIEW_SYS_LOCK
 *     control access to SYS_OSCx, SYS_CFGDATAx, SYS_RESETCTL, 
 *     SYS_CLD, SYS_BOOTCS
 */
#define REALVIEW_SYS_LOCK_LOCKED    (1 << 16)
#define REALVIEW_SYS_LOCKVAL		0xA05F
#define REALVIEW_SYS_LOCKVAL_MASK	0xFFFF	/* write 0xA05F to enable write access */

/*
 * REALVIEW_SYS_FLASH
 */
#define REALVIEW_FLASHPROG_FLVPPEN	(1 << 0)	/* Enable writing to flash */

/*
 * REALVIEW_INTREG
 *     - used to acknowledge and control MMCI and UART interrupts 
 */
#define REALVIEW_INTREG_WPROT        0x00	/* MMC protection status (no interrupt generated) */
#define REALVIEW_INTREG_RI0          0x01	/* Ring indicator UART0 is asserted,              */
#define REALVIEW_INTREG_CARDIN       0x08	/* MMCI card in detect                            */
						/* write 1 to acknowledge and clear               */
#define REALVIEW_INTREG_RI1          0x02	/* Ring indicator UART1 is asserted,              */
#define REALVIEW_INTREG_CARDINSERT   0x03	/* Signal insertion of MMC card                   */


/* 
 *  LED settings, bits [7:0]
 */
#define REALVIEW_SYS_LED0             (1 << 0)
#define REALVIEW_SYS_LED1             (1 << 1)
#define REALVIEW_SYS_LED2             (1 << 2)
#define REALVIEW_SYS_LED3             (1 << 3)
#define REALVIEW_SYS_LED4             (1 << 4)
#define REALVIEW_SYS_LED5             (1 << 5)
#define REALVIEW_SYS_LED6             (1 << 6)
#define REALVIEW_SYS_LED7             (1 << 7)

#define ALL_LEDS                  0xFF

#define LED_BANK                  REALVIEW_SYS_LED

/* 
 * Control registers
 */
#define REALVIEW_IDFIELD_OFFSET	0x0	/* RealView build information */
#define REALVIEW_FLASHPROG_OFFSET	0x4	/* Flash devices */
#define REALVIEW_INTREG_OFFSET		0x8	/* Interrupt control */
#define REALVIEW_DECODE_OFFSET		0xC	/* Fitted logic modules */

/* 
 *  Clean base - dummy
 * 
 */
#define CLEAN_BASE                      REALVIEW_BOOT_ROM_HI

/*
 * System controller bit assignment
 */
#define REALVIEW_REFCLK	0
#define REALVIEW_TIMCLK	1

#define REALVIEW_TIMER1_EnSel	15
#define REALVIEW_TIMER2_EnSel	17
#define REALVIEW_TIMER3_EnSel	19
#define REALVIEW_TIMER4_EnSel	21

#define MAX_TIMER                       2
#define MAX_PERIOD                      699050
#define TICKS_PER_uSEC                  1

/* 
 *  These are useconds NOT ticks.  
 * 
 */
#define mSEC_1                          1000
#define mSEC_5                          (mSEC_1 * 5)
#define mSEC_10                         (mSEC_1 * 10)
#define mSEC_25                         (mSEC_1 * 25)
#define SEC_1                           (mSEC_1 * 1000)

#define REALVIEW_CSR_BASE             0x10000000
#define REALVIEW_CSR_SIZE             0x10000000

/*
 * Defines required by basic firmware
 */
#define REALVIEW_VMINFO_BASE		0x20000000

#endif
