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
	list_t *new;
	list_t *prev;

	prev = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
		free(new);

	new->len = _strlen(new->str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	/* loops to the end of linked list */
	while (prev->next != NULL)
		prev = prev->next;

	/* when reaches end, assigs new address to new node */
	prev->next = new;
	return (new);
}
