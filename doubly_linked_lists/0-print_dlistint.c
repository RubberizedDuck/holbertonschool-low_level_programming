#include "lists.h"
/**
 * print_dlistint - prints out the value in each node
 * @h: the pointer to struct to start the list
 * Return: return the number of elements after printing values
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t numOfElements = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		numOfElements++;
	}
	return (numOfElements);
}
