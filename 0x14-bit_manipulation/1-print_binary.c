#include "main.h"

/**
 * _print_binary - prints a binary number recursively
 * @value: the value to print
 */

void _print_binary(unsigned long int value)
{
	if (value == 0)
	{
		return;
	}

	_print_binary(value >> 1);
	if ((value & 1) == 1)
	{
		_putchar('1')
	}

	if ((value & 1) == 0)
	{
		_putchar('0')
	}
}

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
	} else
	{
		_print_binary(n);
	}
}
