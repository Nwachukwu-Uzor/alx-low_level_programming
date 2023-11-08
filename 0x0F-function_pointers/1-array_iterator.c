#include "function_pointers.h"
#include <stdlib.h>

/**
* array_iterator - executes a function on each element of an array
* @array: array to work on
* @size: is the size of the array
* @action: is a pointer to the function you need to use
* Return: Nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
	{
		return;
	}

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
