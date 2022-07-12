#include "lists.h"

/**
 * _strlen - is a function that returns the length of a string.
 * @s: is the character being passed.
 * Return: len is the string length.
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != 0)
	{
		len = len + 1;
	}
	return (len);
}

/**
 * add_node_end - add node to the end of linked list
 * @head: pointer to current head of node
 * @str: string needing to be duplicated
 * Return: pointer to new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *prevNode;

	prevNode = *head;
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	if (newNode->str == NULL)
		free(newNode);

	newNode->len = _strlen(newNode->str);
	newNode->next = NULL;

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
