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
int i, j;
for (i = 0; i < 9; i++)
{
	for (j = i + 1; j < 10; j++)
	{
		putchar('0' + i);
		putchar('0' + j);
		if ((i + j) < 17)
		{
			putchar(',');
			putchar(' ');
		}
	}
}
putchar('\n');
return (0);
}
