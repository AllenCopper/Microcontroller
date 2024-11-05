#include <reg51.h>
#define Del 2000

void delay(unsigned int time)
{
	unsigned int i,j;
	for(i=0;i<time;i++)
		for(j=0;j<5000;j++);
}

void main(void)
{
	unsigned char count[16]= {0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0a,0x0b,0x0c,0x0d,0x0e,0x0f};
	unsigned int x;
	
	
	P1 = 0x00;
	while(1)
	{
		for(x=0;x<16;x++)
		{P1 = count[x];
		delay(1000);
	}
}}
	
