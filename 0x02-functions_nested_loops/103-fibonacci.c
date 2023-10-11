#include <stdio.h>

/**
* main - write the first 50 fibonacci numbers
* Return: void
*/

int main(void)
{
	long a, b, next, sum;

	a = 1;
	b = 2;
	next = 0;
	sum = 2;
	printf("%ld, %ld", a, b);
	while (sum < 4000000)
	{
		next = a + b;
		if ((next % 2) == 0)
		{
			sum += next;
		}
		a = b;
		b = next;
	}
	printf("%ld\n", sum);
	return (0);
}
