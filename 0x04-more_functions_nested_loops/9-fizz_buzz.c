#include <stdio.h>
#include "main.h"

/**
* main - print fizz buzz
* Return: no return
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i > 1)
		{
			putchar(' ');
		}

		if ((i % 15) == 0)
		{
			printf("FizzBuzz");
			continue;
		}

		if ((i % 3) == 0)
		{
			printf("Fizz");
			continue;
		}

		if ((i % 5) == 0)
		{
			printf("Buzz");
			continue;
		}

		printf("%d", i);
	}
	printf("\n");
	return (0);
}
