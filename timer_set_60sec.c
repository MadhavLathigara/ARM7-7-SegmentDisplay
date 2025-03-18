//timer_set_60sec.c
#include <LPC21xx.h>
#include "types.h"
#include "seg.h"
#define RST_SW_AL 16 //p1.16
#define INC_SW_AL 17 //p1.17
#define DEC_SW_AL 18 //p1.18

int main()
{
	u32 count=0;
	Init7Segs();
	
	while(1)
	{
		disp_2_mux_segs(count);
		
		if(((IOPIN1>>RST_SW_AL)&1)==0)
		{
			count=0;
			while(((IOPIN1>>RST_SW_AL)&1)==0)
			{
				disp_2_mux_segs(count);
			}
		}
		
		if(((IOPIN1>>INC_SW_AL)&1)==0)
		{
			count++;
			while(((IOPIN1>>RST_SW_AL)&1)==0)
			{
				disp_2_mux_segs(count);
			}
		}
		if(((IOPIN1>>DEC_SW_AL)&1)==0)
		{
			count--;
			while(((IOPIN1>>DEC_SW_AL)&1)==0)
			{
				disp_2_mux_segs(count);
			}
		}
	}
}
