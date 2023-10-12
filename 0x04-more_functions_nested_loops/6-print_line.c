#include "main.h"

/**
* print_line - draws a straight line in the terminal
* @n: the length of the line to print
* Return: just prints the number
*/

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
