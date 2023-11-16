#include "lists.h"

/**
* *add_node - it adds a new node at the beginning of a list_t list
* @head: a double pointer to the head list_t list
* @str:  needs to be duplicated
* Return: the address of the new element, or NULL if it fails
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *lst;
	int i = 0;

	lst = malloc(sizeof(list_t));

	if (lst == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}

	lst->i = i;
	lst->str = strdup(str);
	lst->next = *head;
	*head = lst;
	return (lst);
}
