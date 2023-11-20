#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_nodeint_end - adds a new node at the end of a listint_t list.
 *@head: pointer to the head node
 *@n: value to add
 *Return: pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *holder;
	listint_t *tmp = *head;

	holder = malloc(sizeof(listint_t));
	if (!holder)
		return (NULL);

	holder->n = n;
	holder->next = NULL;

	if (*head == NULL)
	{
		*head = holder;
		return (holder);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = holder;

	return (holder);
}
