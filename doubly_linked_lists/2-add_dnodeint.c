#include "lists.h"
/**
 * add_dnodeint - adds a new node to the beginning of the list
 * @head: points to pointer of the start of list
 * @n: number to be stored in new node
 * Return: pointer to new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);

	new->prev = NULL;
	new->n = n;

	if (*head != NULL)
		(*head)->prev = new;

	new->next = *head;
	*head = new;
	return (new);
}
