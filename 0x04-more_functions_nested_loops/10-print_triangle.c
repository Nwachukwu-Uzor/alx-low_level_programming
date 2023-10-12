#include "main.h"

/**
* print_triangle - prints a triangle
* @size: the size of the triangle
* Return: Just prints the triangle
*/

void print_triangle(int size)
{
	int i, j, gap, hashes;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		gap = size - i;
		hashes = size - gap;
		if (gap > 0)
		{
			for (j = 0; j < gap; j++)
			{
				_putchar(' ');
			}
		}

		for (j = 0; j < hashes; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
