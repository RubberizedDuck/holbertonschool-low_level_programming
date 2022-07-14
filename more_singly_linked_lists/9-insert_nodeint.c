#include "lists.h"

/**
 * insert_nodeint_at_index - finds list at a specific index
 * @head: pointer to pointer to start of the list
 * @idx: index to node position to insert new node at
 * @n: the data to insert into new node
 * Return: the address of the new node or NULL if func fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int nodeCount = 0;
	listint_t *new = NULL;
	listint_t *temp = NULL;

	if (head == NULL)
		return (NULL);
	if (*head == NULL && idx > 0)
		return (NULL);
	/* Store copy of head */
	temp = *head;
	if (idx == 0)
	{
		new = malloc(sizeof(*new));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = temp;
		*head = new;
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
