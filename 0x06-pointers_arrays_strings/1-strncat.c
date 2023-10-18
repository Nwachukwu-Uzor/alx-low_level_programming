#include "main.h"

/**
* _strncat - concatenates two strings
* @dest: the destination
* @src: the source
* @n: the number of bytes to use
* Return: a pointer to the src
*/

char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	len = 0, i = 0;

	while (dest[i++])
	{
		len++;
	}

	for (i = 0; src[i] && i < n; i++)
	{
		dest[len++] = src[i];
	}

	return (dest);
}
