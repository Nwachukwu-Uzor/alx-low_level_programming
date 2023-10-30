#include "main.h"

/**
* _strdup -  returns a pointer to a newly allocated space in memory
* @str: the input pointer
* Return: a pointer to newly created memory space
*/

char *_strdup(char *str)
{
	int i = 0, j = 1;
	char *ch;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[j])
	{
		j++;
	}

	ch = malloc((sizeof(char) * j) + 1);

	while (i < j)
	{
		ch[i] = str[i];
		i++;
	}

	ch[i] = '\0';
	return (ch);
}