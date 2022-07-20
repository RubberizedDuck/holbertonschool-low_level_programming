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
	dlistint_t *prev;

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);

	new->prev = NULL;
	new->n = n;
	new->next = *head;
	*head = new;
	prev = new;
	prev->prev = NULL;
	prev->next = (*head)->next;
	new = prev;

	return (new);
}
