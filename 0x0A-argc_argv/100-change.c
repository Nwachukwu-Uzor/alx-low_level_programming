#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - prints the minimum number of coins to make change
* @argc: the number of arguments
* @argv: the argument vector
* Return: always returns 0
*/

int main(int argc, char *argv[])
{
	int cnt, mcoins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cnt = atoi(argv[1]);

	while (cnt > 0)
	{
		if (cnt >= 25)
		{
			cnt -= 25;
		}
		else if (cnt >= 10)
		{
			cnt -= 10;
		}
		else if (cnt >= 5)
		{
			cnt -= 5;
		}
		else if (cnt >= 2)
		{
			cnt -= 2;
		}
		else if (cnt >= 1)
		{
			cnt -= 1;
		}
		mcoins += 1;
	}
	printf("%d\n", mcoins);
	return (0);
}
