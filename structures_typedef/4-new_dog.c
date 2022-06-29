#include <stdlib.h>
#include "dog.h"

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
 * _strdup - duplicates an array and stores it in a memory allocation
 * @str: pointer to the string array
 * Return: The duplicated array stored in new pointer
 */

char *_strdup(char *str)
{
	char *dupe;
	int strLen, array;

	if (str == NULL)
	{
		return (NULL);
	}
	strLen = _strlen(str);
	dupe = malloc(strLen * sizeof(char) + 1);

	if (dupe == NULL)
	{
		return (NULL);
	}
	array = 0;
	while (str[array] != '\0')
	{
		dupe[array] = str[array];
		array = array + 1;
	}
	dupe[array] = '\0';
	return (dupe);
}

/**
 * new_dog - Function creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: Owner of the dog
 * Return: returns a stored duplicate of dog_t if NULL isn't parsed
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *stored;

	stored = malloc(sizeof(dog_t) + 1);


	if (stored == NULL)
		return (NULL);

	stored->name = _strdup(name);
	stored->age = age;
	stored->owner = _strdup(owner);

	if (stored->name == NULL || stored->owner == NULL)
	{
		free(stored->name);
		free(stored->owner);
		free(stored);
		return (NULL);
	}
	return (stored);
}
