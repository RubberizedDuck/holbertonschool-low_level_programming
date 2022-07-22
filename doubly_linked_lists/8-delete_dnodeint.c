#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at given index
 * @head: pointer to pointer to start of list
 * @index: the node to be deleted
 * Return: 1 on success or a -1 on fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp;

	if (head == NULL || (*head) == NULL)
		return (-1);

	temp = *head;

	while (index != count && temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	if (temp == NULL)
		return (-1);

	if (temp->next != NULL)
		temp->next->prev = temp->prev;

	if (index == 0)
		*head = temp->next;
	else
		temp->prev->next = temp->next;

	free(temp);

	return (1);
}
