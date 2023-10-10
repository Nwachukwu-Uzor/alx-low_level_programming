#include "main.h"

/**
* jack_bauer - prints every minute of the day starting from 00:00 to 23:59
* Return: void
*/

void jack_bauer(void)
{
	int hr, min;
	int whole, rem;

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
			if (hr < 10)
			{
				_putchar('0');
				_putchar(hr + '0');
			} else
			{
				whole = hr / 10;
				rem = hr % 10;
				_putchar(whole + '0');
				_putchar(rem + '0');
			}

			_putchar(':');

			if (min < 10)
			{
				_putchar('0');
				_putchar(min + '0');
			} else
			{
				whole = min / 10;
				rem = min % 10;
				_putchar(whole + '0');
				_putchar(rem + '0');
			}
			_putchar('\n');
		}
	}
}
