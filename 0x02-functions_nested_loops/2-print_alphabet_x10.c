#include "main.h"

/**
* print_alphabet_x10 - A function that prints all lowercase alphabets
* Return: Prints all lowercase characters from a to z
*/
void print_alphabet_x10(void)
{
	char alp;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}
		_putchar('\n');
	}
}
