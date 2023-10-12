#include "main.h"

/**
* print_diagonal - draws a diagonal line on the terminal
* @n: the number of diagonal blocks
* Returns: does not return anything (void) after print
*/

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('$');
		_putchar('\n');
		return;
	}

	for (i = 0; i <= n; i++)
	{
		if (i > 0)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('$');
			_putchar('\n');
		}
	}
}
