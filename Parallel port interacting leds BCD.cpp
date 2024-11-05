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
	unsigned char count[10]= {0,1,2,3,4,5,6,7,8,9};
	unsigned int x;
	
	
	P1 = 0x00;
	while(1)
	{
		for(x=0;x<10;x++)
		{P1 = count[x];
		delay(1000);
	}
}}
	
