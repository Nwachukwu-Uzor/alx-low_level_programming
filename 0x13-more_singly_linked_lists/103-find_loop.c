#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *find_listint_loop - function that finds the loop in a linked list.
 *@head: a pointer to the head of the list
 *Return: The address of the node where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first = head;
	listint_t *last = head;

	if (!head)
		return (NULL);

	while (first && last && last->next)
	{
		last = last->next->next;
		first = first->next;
		if (last == first)
		{
			first = head;
			while (first != last)
			{
				first = first->next;
				last = last->next;
			}

			return (last);
		}
	}

	return (NULL);
}
