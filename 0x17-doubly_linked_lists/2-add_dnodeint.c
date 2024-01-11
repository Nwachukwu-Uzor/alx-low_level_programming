#include "lists.h"

/**
 * add_dnodeint - appends a new nod to a dll
 * @head: head node
 * @n: the value at new nod
 * Return: the address of added node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *added_node;
	dlistint_t *h;

	added_node = malloc(sizeof(dlistint_t));
	if (added_node == NULL)
		return (NULL);

	added_node->n = n;
	added_node->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	added_node->next = h;

	if (h != NULL)
		h->prev = added_node;

	*head = added_node;

	return (added_node);
}
