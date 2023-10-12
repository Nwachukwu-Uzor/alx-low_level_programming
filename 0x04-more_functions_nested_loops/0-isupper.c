#include "main.h"
/**
* _isupper - a function that checks for uppercase character.
* Return: 1 if the character is uppercase and 0 otherwise
* @c: the character to be checked
*/

int _isupper(int c)
{
	if (c >= 'a' && c >= 'z')
	{
		return (0);
	}
	return (1);
}
