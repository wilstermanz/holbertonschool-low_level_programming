#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

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
	nameCopy = malloc(_strlen((name) + 1) * sizeof(*name));
	ownerCopy = malloc(_strlen((owner) + 1) * sizeof(*owner));
	if (my_dog == NULL || nameCopy == NULL || ownerCopy == NULL)
	{
		free(name);
		free(owner);
		free(nameCopy);
		free(ownerCopy);
		free(my_dog);
		return (NULL);
	}

	/* Set values */
	nameCopy = name;
	ownerCopy = owner;
	my_dog->name = nameCopy;
	my_dog->age = age;
	my_dog->owner = ownerCopy;

	return (my_dog);
}
