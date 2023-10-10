#include "main.h"

/**
* times_table - a function that prints the 9 times table, starting with 0
* Return: void prints the table
*/

void times_table(void)
{
	int i, j, whole, rem, mlt;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			mlt = i * j;
			if (j > 0)
			{
				if (mlt < 10)
				{
					_putchar(' ');
					_putchar(' ');
				} else
				{
					_putchar(' ');
				}
			}
			if (mlt < 10)
			{
				_putchar(mlt + '0');
			} else
			{
				whole = mlt / 10;
				rem = mlt % 10;
				_putchar(whole + '0');
				_putchar(rem + '0');
			}
			if (j < 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
