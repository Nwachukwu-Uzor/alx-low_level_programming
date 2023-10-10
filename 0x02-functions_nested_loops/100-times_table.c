#include "main.h"

/**
* print_times_table - a function that prints the n times table
* @n: the size of table
* Return: prints the table
*/

void print_times_table(int n)
{
	int i, j, mlt;

	if (n > 15 || n < 0)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		for (j = 1; j <= n; j++)
		{
			_putchar(',');
			_putchar(' ');
			mlt = i * j;

			if (mlt < 100)
			{
				_putchar(' ');
			}
			if (mlt < 10)
			{
				_putchar(' ');
			}
			if (mlt >= 100)
			{
				_putchar((mlt / 100) + '0');
				_putchar(((mlt / 10) % 10) + '0');
			} else if (mlt > 10)
			{
				_putchar((mlt / 10) + '0');
			}i
			_putchar((mlt % 10) + '0');
		}
		_putchar('\n');
	}
}
