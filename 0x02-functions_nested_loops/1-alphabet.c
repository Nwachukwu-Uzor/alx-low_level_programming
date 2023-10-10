#include "main.h"

/**
* print_alphabet - A function that prints all lowercase alphabets
* Return: Prints all lowercase characters from a to z
*/
void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar(alp);
	}
	_putchar('\n');
}
