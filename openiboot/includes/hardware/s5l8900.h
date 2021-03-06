#ifndef S5L8900_H
#define S5L8900_H

#include "hardware/s5l8900.h"

/*
 *	Constants
 */

#define OpenIBootLoad 0x00000000
#define MemoryStart 0x00000000
#define MemoryEnd 0xFFFFFFFF
#define LargeMemoryStart 0x08000000				/* FIXME: This is an ugly hack to get around iBoot's memory rearrangement. Linux boot will only work for installed openiboot! */
#define RAMEnd 0x08000000
#define MemoryHigher 0x80000000
#define HeapStart (LargeMemoryStart + 0x02000000)
#define PageTable (RAMEnd - 0x4000)
#define ExceptionVector MemoryStart
#define GeneralStack ((PageTable - 4) + LargeMemoryStart)

/*
 *	Devices
 */

#define PeripheralPort 0x38000000
#define AMC0 0x22000000
#define ROM 0x20000000
#define WDT_CTRL 0x3E300000

/*
 *	Values
 */

#define EDRAM_CLOCKGATE 0x1B
#define WDT_REBOOTVALUE 0x100000

#define DMA_ALIGN 0x40

#endif

