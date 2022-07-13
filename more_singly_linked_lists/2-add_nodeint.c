#include "lists.h"

/**
 * add_nodeint - adds new node to the beginning of list_t
 * @head: pointer to start of the list
 * @n: number to store in new node
 * Return: pointer to new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *prevNode;

	prevNode = *head;
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = prevNode;
	*head = newNode;

	return (newNode);
}
