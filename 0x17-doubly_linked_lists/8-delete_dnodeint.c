#include "lists.h"

/**
 *delete_dnodeint_at_index - removes a node at an index in DLL
 *@head: head node
 *@index: index of node to remove
 *Return: 1 (success), -1 (failure)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev1;
	dlistint_t *prev2;
	unsigned int i;

	prev1 = *head;

	if (prev1 != NULL)
		while (prev1->prev != NULL)
			prev1 = prev1->prev;

	i = 0;

	while (prev1 != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = prev1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				prev2->next = prev1->next;

				if (prev1->next != NULL)
					prev1->next->prev = prev2;
			}

			free(prev1);
			return (1);
		}

		prev2 = prev1;
		prev1 = prev1->next;
		i++;
	}

	return (-1);
}
