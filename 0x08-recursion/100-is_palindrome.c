#include "main.h"

int _compare_string(char *s, int i, int j);

/**
* is_palindrome - checks if a string is a palindrome
* @s: the string to check
* Return: 1 if string is palindrome else 0
*/

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}

	return (_compare_string(s, _strlen_recursion(s) - 1, 0));
}

/**
* _compare_string - compare string characters
* @s: the string to compare
* @i: the largest iterator
* @j: the smallest iterator
* Return: 1 if it's a palindrome else 0
*/

int _compare_string(char *s, int i, int j)
{
	if (*(s + j) == *(s + i))
	{
		if (i == j || j == i + 1)
		{
			return (1);
		}
		return (0 + _compare_string(s, i - 1, j + 1));
	}
	return (0);
}
