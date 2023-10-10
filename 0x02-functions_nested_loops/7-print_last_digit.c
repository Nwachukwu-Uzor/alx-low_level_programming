#include "main.h"

/**
* print_last_digit - a function that prints the last digit of a number
* @n: (int) the number to be checked
* Return: the value of the last digit
*/

int print_last_digit(int n)
{
	int lastdgt = n % 10;

	if (lastdgt < 0)
	{
		lastdgt *= -1;
	}
	_putchar(lastdgt + '0');
	return (lastdgt);
}
