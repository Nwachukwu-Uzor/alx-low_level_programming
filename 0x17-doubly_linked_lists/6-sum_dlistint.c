#include "lists.h"

/**
 * sum_dlistint - returns the sum of values in dll
 * @head: head node
 * Return: sum of the values
 */
int sum_dlistint(dlistint_t *head)
{
	int result;

	result = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			result += head->n;
			head = head->next;
		}
	}

	return (result);
}
