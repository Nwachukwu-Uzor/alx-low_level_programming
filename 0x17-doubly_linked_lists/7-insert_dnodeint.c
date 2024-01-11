#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a position
 * @h: head node
 * @idx: the position to insert
 * @n: value at new node
 * Return: the address of new node added or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *added_node;
	dlistint_t *head;
	unsigned int i;

	added_node = NULL;
	if (idx == 0)
		added_node = add_dnodeint(h, n);
	else
	{
		head = *h;
		i = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (i == idx)
			{
				if (head->next == NULL)
					added_node = add_dnodeint_end(h, n);
				else
				{
					added_node = malloc(sizeof(dlistint_t));
					if (added_node != NULL)
					{
						added_node->n = n;
						added_node->next = head->next;
						added_node->prev = head;
						head->next->prev = added_node;
						head->next = added_node;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}

	return (added_node);
}
