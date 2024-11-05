/*
	Seven Segment Interfacing
	Connect Seven Segment card to CN2
	A	->		P0.6
	B	->		P0.5
	C	->		P0.0
	D	->		P0.7
	E	->		P0.2
	F	->		P0.3
	G	->		P0.4
	Dp	->		P0.1
*/

#include<reg51.h>
#define ONE     0x21
#define TWO     0xF4
#define THREE   0xF1
#define FOUR    0x39
#define FIVE    0xD9
#define SIX     0xDD
#define SEVEN   0x61
#define EIGHT   0xFD
#define NINE    0xF9
#define ZERO    0xED

unsigned char segData[10] = {ZERO, ONE, TWO, THREE, FOUR, FIVE, SIX,SEVEN, EIGHT, NINE};

void delay(unsigned int time)
{
	int i,j;
	for(i=0;i<time;i++)
		for(j=0;j<100;j++);
}

void main()
{
unsigned int count = 1;
unsigned int i;
P0 = 0x00;
P3 = 0x00;

while(1)
{
for(count=0;count<100;count++)
	for(i=0;i<30;i++)
	{
	 P3 = 1<<2;
	 P0 = ~segData[count/10];
	 delay(10);
	 P3 = 1<<3;
	 P0 = ~segData[count%10];
	 delay(10);
	}
 }
}
