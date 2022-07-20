#include "lists.h"

/**
 * sum_dlistint - adds each value in every element of a linked list
 * and returns the total
 * @head: pointer to start of list
 * Return: total value or 0 if head equals NULL
 */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		total = total + head->n;
		head = head->next;
	}
	return (total);
}
