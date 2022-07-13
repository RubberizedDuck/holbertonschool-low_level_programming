#include "lists.h"

/**
 * free_listint - free linked list memory
 * @head: pointer to start of the list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
