#include<lpc214x.h>
void delay(unsigned int);

unsigned int seg[]={0x00000006,0x0000005B,0x0000004F,0x00000066,0x0000006D,0x0000007D,0x00000007,0x0000007F,0x0000006F,0x0000003F};
#define c0 0x00010000
#define c1 0x00020000
#define c2 0x00040000
#define r0 0x00080000
#define r1 0x00100000
#define r2 0x00200000
#define r3 0x00400000
int main(void)
{
IO0DIR=0x000000FF;
IO1DIR=0x00780000;
while(1)
{ 
IO1CLR|=r0;
IO1SET|=(r1|r2|r3);
if(!(IO1PIN& c0))
{
while(!(IO1PIN&c0));

IO0CLR=(seg[1]|seg[2]|seg[3]|seg[4]|seg[5]|seg[6]|seg[7]|seg[8]|seg[9]);
IO0SET=seg[0];
}
if(!(IO1PIN&c1))
{
while(!(IO1PIN&c1));

IO0CLR=(seg[0]|seg[2]|seg[3]|seg[4]|seg[5]|seg[6]|seg[7]|seg[8]|seg[9]);
IO0SET=seg[1];
}
if(!(IO1PIN&c2))
{
while(!(IO1PIN&c2));
IO0CLR=(seg[0]|seg[1]|seg[3]|seg[4]|seg[5]|seg[6]|seg[7]|seg[8]|seg[9]);
IO0SET=seg[2];

}
IO1CLR|=r1;
IO1SET|=(r0|r2|r3);
if(!(IO1PIN & c0))
{
while(!(IO1PIN& c0));
IO0CLR=(seg[1]|seg[2]|seg[0]|seg[4]|seg[5]|seg[6]|seg[7]|seg[8]|seg[9]);
IO0SET=seg[3];

}
if(!(IO1PIN& c1))
{
while(!(IO1PIN& c1));
IO0CLR=(seg[1]|seg[2]|seg[3]|seg[0]|seg[5]|seg[6]|seg[7]|seg[8]|seg[9]);
IO0SET=seg[4];

}
if(!(IO1PIN& c2))
{
while(!(IOPIN1& c2));
IO0CLR=(seg[1]|seg[2]|seg[3]|seg[4]|seg[0]|seg[6]|seg[7]|seg[8]|seg[9]);
IO0SET=seg[5];

}
IO1CLR|=r2;
IO1SET|=(r1|r0|r3);
if(!(IO1PIN& c0))
{
while(!(IO1PIN& c0));
IO0CLR=(seg[1]|seg[2]|seg[3]|seg[4]|seg[5]|seg[0]|seg[7]|seg[8]|seg[9]);
IO0SET=seg[6];

}
if(!(IO1PIN& c1))
{
while(!(IO1PIN& c1));
IO0CLR=(seg[1]|seg[2]|seg[3]|seg[4]|seg[5]|seg[6]|seg[0]|seg[8]|seg[9]);
IO0SET=seg[7];

}
if(!(IO1PIN& c2))
{
while(!(IO1PIN& c2));
IO0CLR=(seg[1]|seg[2]|seg[3]|seg[4]|seg[5]|seg[6]|seg[7]|seg[0]|seg[9]);
IO0SET=seg[8];

}
IO1CLR|=r3;
IO1SET|=(r1|r2|r0);
if(!(IO1PIN& c1))
{
while(!(IO1PIN& c1));
IO0CLR=(seg[1]|seg[2]|seg[3]|seg[4]|seg[5]|seg[6]|seg[7]|seg[8]|seg[0]);
IO0SET=seg[9];

}

}
}
void delay(unsigned int count)
 {
for(int i=count;i>0;i++)
	{
		for(int j=0;j<count;j++);
	}
}

