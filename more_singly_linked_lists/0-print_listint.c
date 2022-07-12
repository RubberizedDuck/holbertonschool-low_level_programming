#include "lists.h"

/**
 * print_listint - prints the number of elements of struct list
 * @h: pointer to first struct list
 * Return: Number of elements created from struct list
 */

size_t print_listint(const listint_t *h)
{
	size_t numOfElements = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		numOfElements++;
		h = h->next;
	}
	return (numOfElements);
}
