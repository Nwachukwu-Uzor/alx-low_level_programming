#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *pop_listint - deletes the head node of a listint_t linked list
 *@head: pointer to head node
 *Return: and returns the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int counter;

	if (!head || !*head)
	{
		return (0);
	}

	counter = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (counter);
}
