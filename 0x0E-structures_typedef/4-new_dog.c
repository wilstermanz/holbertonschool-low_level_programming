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
		return (NULL);
	
	/* Allocate space and check for errors */
	my_dog = malloc(sizeof(*my_dog));
	nameCopy = malloc(strlen((name) + 1) * sizeof(*name));
	ownerCopy = malloc(strlen((owner) + 1) * sizeof(*owner));
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
	strcpy(nameCopy, name);
	strcpy(ownerCopy, owner);
	my_dog->name = nameCopy;
	my_dog->age = age;
	my_dog->owner = ownerCopy;
	return (my_dog);
}
