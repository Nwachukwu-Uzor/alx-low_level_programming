#include "lists.h"

/**
 * dlistint_len - return the node count of a DLL
 * @h: first node
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int len;

	len = 0;

	if (h == NULL)
		return (len);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}

	return (len);
}
