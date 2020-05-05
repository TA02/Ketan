#include <REGX51.H>

sbit button = P1^0;			//	Assign Pin 1.0 connect to button
sbit led = P2^0;			//	Assign Pin 2.0 connect to led

void delay (unsigned int time)		//	Definition of Delay function is declared
{
	unsigned int i,j;
	for (i=0;i<time;i++)
	{
		for(j=0;j<1275;j++);
	}
}

void main ()
{
	int b=0;
	button = 1;
	led = 0;
	while(1)
	{
		if (button==0)
		{
			delay(50);
			led=1;
			b++;
			if (b==2)
			{
				led=0;
				b=0;
			}
		}
	}
}


