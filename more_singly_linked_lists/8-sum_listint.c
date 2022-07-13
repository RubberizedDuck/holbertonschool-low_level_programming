#include "lists.h"

/**
 * sum_listint - adds each value in every element of a linked list
 * @head: pointer to start of the list
 * Return: The total value or 0 if head equals NULL
 */

int sum_listint(listint_t *head)
{
	int total;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		total = total + head->n;
		head = head->next;
	}
	return (total);
}
