#include "lists.h"

/**
 * print_list - prints the number of elements of struct list
 * @h: pointer to first struct list
 * Return: Number of elements created from struct list
 */

size_t print_list(const list_t *h)
{
	size_t numOfElements = 0;

	while (h != NULL)
	{
		printf("[%d] ", h->len);
		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);
		numOfElements++;
		h = h->next;
	}
	return (numOfElements);
}
