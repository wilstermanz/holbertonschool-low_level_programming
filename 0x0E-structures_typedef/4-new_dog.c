#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	/* declarations */
	dog_t *my_dog;
	char *nameCopy, *ownerCopy;

	/* Check for NULL input */
	if (name == NULL || owner == NULL)
	{
		free(name);
		free(owner);
		return (NULL);
	}

	/* Allocate space and check for errors */
	my_dog = malloc(sizeof(*my_dog));
	if (my_dog == NULL)
	{
		free(name);
		free(owner);
		free(my_dog);
		return (NULL);
	}

	/* Set values */
	nameCopy = _strdup(name);
	ownerCopy = _strdup(owner);
	my_dog->name = nameCopy;
	my_dog->age = age;
	my_dog->owner = ownerCopy;

	return (my_dog);
}

/**
 * _strlen - return the len of string *s
 * @s: a string.
 * Return: len of string.
 */
unsigned int _strlen(char *s)
{
	unsigned int len = 0;

	while (*(s + len))
		len++;
	return (len);
}

/**
 * _strdup - returns a pointer to a copy of a string
 * @str: string to be copied
 * Return: Pointer to str copy, or NULL if error
 */
char *_strdup(char *str)
{
	char *cpy;
	int i, strlen = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		strlen++;

	cpy = malloc((strlen + 1) * sizeof(char));
	if (cpy == NULL)
	{
		free(cpy);
		return (NULL);
	}

	for (i = 0; str[i]; i++)
		cpy[i] = str[i];

	return (cpy);
}
