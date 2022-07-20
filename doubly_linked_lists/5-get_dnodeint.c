#include "lists.h"

/**
 * get_dnodeint_at_index - returns the node at the given index
 * @head: pointer to start of the list
 * @index: the node index to get
 * Return: returns the node at index or NULL if head is NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (index == 0)
		return (head);


	/* increments through the nodes until count matches index */
	while (count < index)
	{
		head = head->next;
		count++;
		if (head == NULL)
			return (NULL);
	}

	return (head);
}
