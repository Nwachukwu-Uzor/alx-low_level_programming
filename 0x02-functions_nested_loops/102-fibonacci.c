#include <stdio.h>

/**
* main - write the first 50 fibonacci numbers
* Return: void
*/

int main(void)
{
	int i, a, b, next;

	a = 1;
	b = 2;

	printf("%d, %d, ", a, b);
	for (i = 0; i < 50; i++)
	{
		next = a + b;
		printf("%d, ", next);
		a = b;
		b = next;
	}
	return (0);
}
