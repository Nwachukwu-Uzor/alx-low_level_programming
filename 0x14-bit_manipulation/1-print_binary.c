#include "main.h"

int _raise_to_power(unsigned int base, unsigned int power);

/**
 *_raise_to_power - raises a number to a value
 *@base: the base
 *@power: the power
 *Return: value of (base ^ power)
 */

unsigned long int _raise_to_power(unsigned int base, unsigned int power)
{
	unsigned long int n;
	unsigned int counter;

	n = 1;
	for (counter = 1; counter <= power; counter++)
		n *= base;
	return (n);
}

/**
 *print_binary - prints the binary representation of a number.
 *@n: the number to print
 *Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int div, check;
	char flag;

	flag = 0;
	div = _raise_to_power(2, sizeof(unsigned long int) * 8 - 1);
	while (div != 0)
	{
		check = n & div;
		if (check == div)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || div == 1)
		{
			_putchar('0');
		}

		div >>= 1;
	}
}
