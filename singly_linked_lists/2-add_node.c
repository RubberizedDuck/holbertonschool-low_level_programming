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
 * add_node - adds new node to the beginning of list_t
 * @head: pointer to start of the list
 * @str: pointer to string needing to be duplicated
 * Return: pointer to new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	list_t *prev;

	prev = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(new->str);
	new->next = prev;
	*head = new;

	return (new);
}
