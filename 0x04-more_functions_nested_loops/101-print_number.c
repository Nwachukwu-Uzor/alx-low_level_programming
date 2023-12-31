#include "main.h"

/**
* print_number - prints an integer
* @n: The integer to be printed
* Return: Does not return any value
*/

void print_number(int n)
{
	unsigned int j;

	j = n;
	if (n < 0)
	{
		n *= -1;
		j = n;
		_putchar('-');
	}
	j /= 10;
	if (j != 0)
	{
		print_number(j);
	}
	_putchar((unsigned int) n % 10 + '0');
}
