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
	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	new->n = n;
	temp = *h;
	if (idx == 0)
	{
		new->next = temp;
		new->prev = NULL;
		if (temp != NULL)
			temp->prev = new;
		*h = new;
		return (new);

	}
	while (temp != NULL)
	{
		if (nodeCount + 1 == idx)
		{
			new->next = temp->next;
			new->prev = temp;
			temp->next = new;
			if (new->next != NULL)
				new->next->prev = new;
			return (new);
		}
		temp = temp->next;
		nodeCount++;
	}
	return (NULL);
}
