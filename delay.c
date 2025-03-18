//delay.c
//@XTAL = 12MHZ, & CCLK = 60MHZ

#include "types.h"

void delay_us(u32 dlyUS)
{
	dlyUS*=2;
	while(dlyUS--);
}
void delay_ms(u32 dlyMS)
{
	dlyMS*=2400;
	while(dlyMS--);
}
void delay_s(u32 dlyS)
{
	dlyS*=2400000;
	while(dlyS--);
}
