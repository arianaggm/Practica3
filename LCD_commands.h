#ifndef XC_LCD_CMDS_H
#define XC_LCD_CMDS_H

#include <xc.h>

#define ClearDisp 0b00000001
#define ReHome 0b00000010
#define IncShif 0b00000111
#define IncNoShif 0b00000110
#define DecShif 0b00000101
#define DecNoShif 0b00000100
#define DispOff 0b00001000
#define DispOn 0b00001100
#define DispOnC 0b00001110
#define DispOnB 0b00001101
#define DispOnCB 0b00001111
#define DispSfL 0b00011000
#define DispSfR 0b00011100
#define CursSfL 0b00010000
#define CursSfR 0b00010100
#define Set8 0b00110000
#define Set4 0b00100000
#define Set8_2lin 0b00111000
#define Set4_2lin 0b00101000
#define SetCGRAM 0b01000000
#define SetDDRAM 0b10000000

#endif /* XC_LCD_CMDS_H */
