#include "main.h"

/**
* main - Entry point
* Return: Prints all lowercase characters from a to z
*/
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void) 
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar(alp);
	}
	_putchar('\n');
}
