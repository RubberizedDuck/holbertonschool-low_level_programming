#include "lists.h"

/**
 * add_nodeint_end - add node to the end of linked list
 * @head: pointer to current head of node
 * @n: number to store in new element
 * Return: pointer to new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *prevNode;

	prevNode = *head;
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	/* loops to the end of linked list */
	while (prevNode->next != NULL)
		prevNode = prevNode->next;

	/* when reaches end, assigs new address to new node */
	prevNode->next = newNode;
	return (newNode);
}
