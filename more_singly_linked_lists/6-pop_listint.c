#include "lists.h"

/**
 * pop_listint - delete's the head list node and returns the value
 * @head: - pointer to the head pointer
 * Return: Value stored in head list, or 0 if NULL
 */

int pop_listint(listint_t **head)
{
	listint_t *copy;
	int val;

	copy = *head;
	if (copy == NULL)
		return (0);

	val = copy->n;
	*head = copy->next;
	free(copy);

	return (val);
}
