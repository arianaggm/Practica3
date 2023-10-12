#ifndef LCD_PORTD_H
#define LCD_PORTD_H

#include <xc.h> // include processor files - each processor file is guarded.
#include "LCD_Commands.h"
#define _XTAL_FREQ 8000000

#define RS LATEbits.LE0 //McLab2
//#define RS PORTEbits.RE2 //PicGenios
#define EN LATEbits.LE1

void iniLCD(void);
void LCDcommand(char a);
void LCDchar(char a);
void LCDprint(int size, char a[], int wait_ms);
void MoveCursor(char x, char y);
void MoveLCD(char dir, char inc);
void GenChar(char a[8]);

#endif /* LCD_PORTD_H */
