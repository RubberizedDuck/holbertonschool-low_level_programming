#include "lists.h"
/**
 * dlistint_len - returns the number of elements in linked list
 * @h: pointer to start of linked list
 * Return: return the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t numOfElements = 0;

	while (h != NULL)
	{
		numOfElements++;
		h = h->next;
	}
	return (numOfElements);
}
