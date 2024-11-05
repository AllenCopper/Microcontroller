#include<reg51.h>
void delay();
void main()
{
	while(1)
	{
	P0=0x08;
	delay();
	P0=0x04;
	delay();
	P0=0x02;
	delay();
	P0=0x01;
	delay();
	}
}
void delay()
{
    unsigned int j;
    for(j=0; j<500; j++)
    {

    }
}
