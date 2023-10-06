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
for (i = 0; i < 99; i++)
{
	for (j = i + 1; j < 99; j++)
	{
		putchar((i%10) + '0');
		putchar((j%10) + '0');
		if(i == 99; j == 98)
		{
			continue;
			putchar(',');
			putchar(' ');
		}
	}
}
putchar('\n');
return (0);
}
