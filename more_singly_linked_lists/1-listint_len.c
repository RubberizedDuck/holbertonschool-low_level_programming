#include "lists.h"

/**
 * listint_len - returns number of elements in a linked struct
 * @h: pointer to first struct list
 * Return: Number of elements created from struct list
 */

size_t listint_len(const listint_t *h)
{
	size_t numOfElements = 0;

	while (h != NULL)
	{
		numOfElements++;
		h = h->next;
	}
	return (numOfElements);
}
