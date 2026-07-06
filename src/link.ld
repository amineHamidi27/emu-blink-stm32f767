/* Linker script pour STM32F767ZI */
/* Flash 2 Mo, SRAM 512 Ko (DTCM + SRAM1 + SRAM2 contigus a partir de 0x20000000) */

MEMORY
{
	rom (rx)  : ORIGIN = 0x08000000, LENGTH = 2048K
	ram (rwx) : ORIGIN = 0x20000000, LENGTH = 512K
}

INCLUDE cortex-m-generic.ld
