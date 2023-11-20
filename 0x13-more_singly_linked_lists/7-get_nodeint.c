#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *get_nodeint_at_index - returns the nth node of a listint_t linked list
 *@head: a pointer to the head of the list
 *@index: position of item to be returned
 *Return: pointer to the node at position index, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *tmp = head;

	while (tmp && count < index)
	{
		tmp = tmp->next;
		count++;
	}

	if (tmp)
	{
		return (tmp);
	}

	return (NULL);
}
