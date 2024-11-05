#include <reg51.h>

void delay(unsigned int time)
{
	unsigned int i,j;
	for(i=0;i<time;i++)
		for(j=0;j<0xFF;j++);
}

int main()
{
	P1 = 0x00;
	while(1)
	{
		P1 = ~P1;
		delay(100);
	}
}
