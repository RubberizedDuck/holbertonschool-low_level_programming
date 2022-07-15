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

/**
 * pop_listint - delete's the head list node and returns the value
 * @head: - pointer to the head pointer
 * Return: Value stored in head list, or 0 if NULL
 */

int pop_listint(listint_t **head)
{
	listint_t *copy;
	int val;

	copy = *head;
	if (copy == NULL)
		return (0);

	val = copy->n;
	*head = copy->next;
	free(copy);

	return (val);
}

/**
 * delete_nodeint_at_index - searches through list to find node to delete
 * @head: pointer to pointer to start of the list
 * @index: the node we are searching for
 * Return: 1 on successful deletion or -1 if unsuccessful
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *delete, *temp;
	int rem;

	if (head == NULL)
		return (-1);

	if (index == 0)
	{
		rem = pop_listint(head);
		if (rem == 0)
			return (-1);
		return (1);
	}

	delete = get_nodeint_at_index(*head, index);
	if (delete == NULL || delete == 0)
		return (-1);

	temp = *head;
	while (temp->next != delete)
		temp = temp->next;
	if (delete->next == NULL)
	{
		temp->next = NULL;
		free(delete);
		return (1);
	}
	temp->next = delete->next;
	free(delete);
	return (1);
}
