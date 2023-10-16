#include "main.h"

/**
* puts2 - prints every character of a string
* @str: the string to be printed
* Return: does not return anything
*/

void puts2(char *str)
{
	int i, j;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
