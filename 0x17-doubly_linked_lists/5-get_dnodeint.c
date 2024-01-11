#include "lists.h"

/**
 * get_dnodeint_at_index - returns the node at a position
 * @head: pointer to head node
 * @index: position of desired node
 * Return: node at index n
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int pos;
	dlistint_t *current;

	pos = 0;
	if (head == NULL)
		return (NULL);

	current = head;
	while (current)
	{
		if (index == pos)
			return (current);
		pos++;
		current = current->next;
	}
	return (NULL);
}
