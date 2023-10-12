#include "main.h"

/**
* main - print fizz buzz
* Return: no return
*/

int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		if (i > 0)
		{
			_putchar(' ');
		}

		if ((i % 3) == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
		}

		if ((i % 5) == 0)
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
			continue;
		}

		if (i < 10)
		{
			_putchar(i + '0');
			continue;
		}

		_putchar((i / 10) + '0');
		_putchar((i % 10) + '0');
	}
	return (0);
}
