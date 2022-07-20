#include "lists.h"

/**
 * free_dlistint - free the linked list memory
 * @head: pointer to the start of the linked list to free
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
