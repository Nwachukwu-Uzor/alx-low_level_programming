#include "lists.h"

/**
 * free_dlistint - frees a DLL
 * @head: the head node's pointer
 * Return: nothing
 **/

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
