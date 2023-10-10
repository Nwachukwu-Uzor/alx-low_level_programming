#include <stdio.h>

/**
* print_to_98 -  98 Battery Street, the OG
* @n: the integer parameter
* Return: void
*/

void print_to_98(int n)
{
	int temp;

	temp = n;
	while (temp != 98)
	{
		printf("%d, ", temp);
		if (n > 98)
		{
			temp--;
		} else
		{
			temp++;
		}
	}
	printf("98 ");
}
