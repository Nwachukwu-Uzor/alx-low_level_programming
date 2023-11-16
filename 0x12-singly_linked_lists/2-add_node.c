#include "lists.h"

/**
 *add_node - adds a new node at the beginning of a list_t list.
 *@head: a double pointer to the head list_t list
 *@str:  needs to be duplicated
 *Return: the address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *lt;
	unsigned int i = 0;

	while (str[i])
	{
		i++;
	}

	lt = malloc(sizeof(list_t));
	if (!lt)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->i = i;
	new->next = (*head);
	(*head) = lt;

	return (*head);
}
