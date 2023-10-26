#include "main.h"

int  _compute_sqrt(int n, int i);

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: the number
* Return: the square root
*/

int _sqrt_recursion(int n)
{
	return (_compute_sqrt(n, 1));
}

/**
* _compute_sqrt - calculate the square root
* @n: the number to square
* @i: the counter
* Return: the square root of n
*/
int _compute_sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt == n)
	{
		return (i);
	}

	if (sqrt > n)
	{
		return (-1);
	}
	return (_compute_sqrt(n, i + 1));
}
