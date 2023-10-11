#include <stdio.h>

/**
* main - write the first 50 fibonacci numbers
* Return: void
*/

int main(void)
{
	int i;
	long a, b, next;

	a = 1;
	b = 2;

	printf("%ld, %ld", a, b);
	for (i = 2; i < 50; i++)
	{
		next = a + b;
		printf(", %ld", next);
		a = b;
		b = next;
	}
	return (0);
}
