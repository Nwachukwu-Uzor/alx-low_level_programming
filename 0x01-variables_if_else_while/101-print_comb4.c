#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
* main - Entry point
* Return: Prints all lowercase characters from a to z
*/
int main(void)
{
int i, j, k;
for (i = 0; i < 8; i++)
{
	for (j = i + 1; j < 9 j++)
	{
		for (k = j + 1; k < 10; k++)
		{
			putchar('0' + i);
			putchar('0' + j);
			putchar('0' + k);
			if ((i + j + k)  < 24)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
putchar('\n');
return (0);
}
