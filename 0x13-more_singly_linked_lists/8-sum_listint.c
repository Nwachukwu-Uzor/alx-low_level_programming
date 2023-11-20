#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *sum_listint - returns the sum of all the data (n) of a listint_t linked list
 *@head: a pointer to the head of the list
 *Return: sum of all data (n) of a listint_t linked list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
