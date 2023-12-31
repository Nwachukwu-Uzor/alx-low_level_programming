#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_nodeint - adds a new node at the beginning of a listint_t list
 *@head: the head node
 *@n: position to add
 *Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = malloc(sizeof(listint_t));
	if (!tmp)
		return (NULL);

	tmp->n = n;
	tmp->next = *head;
	*head = tmp;

	return (tmp);
}
