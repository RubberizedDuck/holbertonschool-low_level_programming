#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node at the inputted index
 * @head: pointer to start of list
 * @index: the node at the index
 * Return: returns the node at the index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (index == 0)
		return (head);

	if (head == NULL)
		return (NULL);

	/* increments through the nodes until count matches index */
	while (count < index)
	{
		head = head->next;
		count++;
	}

	return (head);
}
