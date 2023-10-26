#include "main.h"
int _check_is_prime(int n, int i);


/**
* is_prime_number - checks if a number is prime
* @n: the number to check
* Return: 1 if the number is prime else 0
*/

int is_prime_number(int n)
{
	return (_check_is_prime(n, 1));
}


/**
* _check_is_prime - checks if a number is prime
* @n: the number to check
* @i: the iteration count
* Return: 1 if the number is prime else 0
*/

int _check_is_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}

	if (n % i == 0 && i > 1)
	{
		return (1);
	}

	return (_check_is_prime(n, i + 1));
}
