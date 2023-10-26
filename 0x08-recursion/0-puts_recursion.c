#include "main.h"

/**
* _puts_recursion - prints a string, followed by a new line
* @s: a pointer to the string
* Return: no return value
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	return (_puts_recursion(s));
}
