#include "lists.h"

/**
* *add_node - it adds a new node at the beginning of a list_t list
* @head: a double pointer to the head list_t list
* @str:  needs to be duplicated
* Return: the address of the new element, or NULL if it fails
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *lt;
	int i = 0;

	lt = malloc(sizeof(list_t));

	if (lt == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}

	lt->i = i;
	lt->str = strdup(str);
	lt->next = *head;
	*head = lt;
	return (lt);
}
