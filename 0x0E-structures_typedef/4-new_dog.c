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
	/* Declaring variables */
	dog_t *d;
	char *nameCpy, *ownerCpy;

	/* Check for NULL input */
	if (name == NULL || owner == NULL)
		return (NULL);
	/* Allocate space and check for errors*/
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	nameCpy = malloc(sizeof(*nameCpy) * (_strlen(name) + 1));
	ownerCpy = malloc(sizeof(*ownerCpy) * (_strlen(owner) + 1));
	if (nameCpy == NULL || ownerCpy == NULL)
	{
		free(d);
		if (nameCpy)
			free(nameCpy);
		if (ownerCpy)
			free(ownerCpy);
		return (NULL);
	}

	/* Copy strings */
	_strcpy(nameCpy, name);
	_strcpy(ownerCpy, owner);

	/* Assign values */
	d->name = nameCpy;
	d->age = age;
	d->owner = ownerCpy;
	return (d);
}


/**
 * _strlen - counts bytes in string
 * @str: input string
 * Return: length of string
 */

int _strlen(char *str)
{
	int i, size = 0;

	for (i = 0; str[i]; i++)
		size++;
	return (size);
}

/**
 * _strcpy - Copies a string
 * @dest: array to be copied into
 * @src: string to be copied
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, j, count = 0;

	for (i = 0; src[i] != '\0'; i++)
		count++;
	for (j = 0; j <= count; j++)
		dest[j] = src[j];
	return (dest);
}
