#include "main.h"

/**
* puts_half - A function that prints half a string
* @str: the string to be printed
* Return: returns nothing
*/

void puts_half(char *str)
{
	int i, j;

	i = 0;

	while (str[i] != '\n')
	{
		i++;
	}

	if (i % 2 == 1)
	{
		j = (i - 1) / 2;
		j++;
	} else
	{
		j = i / 2;
	}

	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
