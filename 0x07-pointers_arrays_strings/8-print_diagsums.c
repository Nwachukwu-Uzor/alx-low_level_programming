#include "main.h"

/**
* print_diagsums - prints the sum of the two diagonals
* @a: param 1
* @size: param 2
* Return: no return value
*/

void print_diagsums(int *a, int size)
{
	int i, j, s1 = 0, s2 = 0;

	for (i = 0; i <= (size * size); i += (size + 1))
	{
		s1 = s1 + a[i];
	}

	for (j = size - 1; j <= (size * size) - size; j += (size - 1))
	{
		s2 = s2 + a[j];
	}

	printf("%d, %d\n", s1, s2);
}
