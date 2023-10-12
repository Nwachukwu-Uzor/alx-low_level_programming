#include <stdio.h>
#include <math.h>

/**
* main - prints the largest prime factor of the number 612852475143
* Return: no return
*/

int main(void)
{
	long i, number, maxpf;
	double sqr;

	number = 612852475143;
	sqr = sqrt(number);

	for (i = 1; i <= sqr; i++)
	{
		if ((number % i) == 0)
		{
			maxpf = number / i;
		}
	}
	printf("%ld\n", maxpf);
	return (0);
}
