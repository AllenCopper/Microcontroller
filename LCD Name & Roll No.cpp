//LCD interfacing with PIC18F4550 (in 8-BIT mode) to display Student Name & Roll No.
#include <stdio.h>
#include <stdlib.h>
#include<pic18f4550.h>

#define RS LATCbits.LATC0
#define E LATCbits.LATC1
#define LCDPORT LATB

void delay()
{
    for(int i=0; i<30000; i++)
    {
    }
}

void sendCommand(unsigned char command)
{
    LCDPORT=command;
    RS=0;
    delay();
    E=1;
    delay();
    E=0;
    delay();
}
void sendData(unsigned char data)
{
    LCDPORT=data;
    RS=1;
    delay();
    E=1;
    delay();
    E=0;
    delay();
}

void main()
{
    TRISB=0x00;
    TRISCbits.RC0=0;
    TRISCbits.RC1=0;
    sendCommand(0x38);
    sendCommand(0x01);
    sendCommand(0x0F);
    sendCommand(0x06);
    sendCommand(0x80);
    sendData('S');
    sendData('A');
    sendData('M');
    sendData('A');
    sendData('D');
    sendData('H');
    sendData('A');
    sendData('N');
    sendData(' ');
    sendData('M');
    sendData('A');
    sendData('L');
    sendData('I');
    sendCommand(0xC0);
    sendData('3');
    sendData('0');
    sendData('4');
    sendData('C');
    sendData('0');
    sendData('0');
    sendData('1');

}