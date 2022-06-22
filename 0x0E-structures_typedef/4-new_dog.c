#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	char *newname, *newowner;

	newname = malloc(sizeof(name));
	newowner = malloc(sizeof(owner));
	if (newname == NULL || newowner == NULL)
	{
		return (NULL);
	}

	newname = name;
	newowner = owner;

	my_dog = malloc(sizeof(my_dog) * (sizeof(newname) + sizeof(newowner)));
	if (my_dog == NULL)
		return (NULL);

	my_dog->name = newname;
	my_dog->age = age;
	my_dog->owner = newowner;

	return(my_dog);
}
