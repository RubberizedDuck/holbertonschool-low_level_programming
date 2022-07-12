#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns number of elements in a linked struct
 * @h: pointer to first struct list
 * Return: Number of elements created from struct list
 */

size_t list_len(const list_t *h)
{
	size_t numOfElements = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("(nil)\n");
		else
		numOfElements++;
		h = h->next;
	}
	return (numOfElements);
}
