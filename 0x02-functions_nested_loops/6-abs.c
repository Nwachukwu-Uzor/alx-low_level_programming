#include "main.h"

/**
* _abs - a function that computes the absolute value of an integer
* @n: (int) the number to be checked
* Return: always return the absolute value of n
*/

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}

	return (n * -1);
}
