#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *added_node;

	added_node = malloc(sizeof(dlistint_t));
	if (added_node == NULL)
		return (NULL);

	added_node->n = n;
	added_node->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = added_node;
	}
	else
	{
		*head = added_node;
	}

	added_node->prev = h;

	return (added_node);
}
