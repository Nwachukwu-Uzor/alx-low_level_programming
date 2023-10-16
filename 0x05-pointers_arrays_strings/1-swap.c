#include "main.h"

/**
* swap_int - Swaps two variables whose pointers are passed to it
* @a: The first variable
* @b: The second variable
* Return: Does not return anything
*/

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
