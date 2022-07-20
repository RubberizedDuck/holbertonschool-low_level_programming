#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node at specific index
 * @h: pointer to pointer to start of the list
 * @idx: index to node position to insert new node at
 * @n: the data to insert into new node
 * Return: the address of the new node or NULL if func fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int nodeCount = 0;
	dlistint_t *new;
	dlistint_t *temp;

	if (h == NULL)
		return (NULL);
	if (*h == NULL && idx > 0)
		return (NULL);
	/* Store copy of head */
	temp = *h;
	if (idx == 0)
	{
		new = malloc(sizeof(*new));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = temp;
		*h = new;
		return (new);

	}
	/* find where to add new node */
	while (temp != NULL)
	{
		/* Adds new node once found */
		if (nodeCount + 1 == idx)
		{
			new = malloc(sizeof(*new));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		temp = temp->next;
		nodeCount++;
	}

	return (NULL);
}
