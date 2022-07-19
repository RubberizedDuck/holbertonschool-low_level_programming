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

	prev = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = prev;
	*head = new;

	return (new);
}
