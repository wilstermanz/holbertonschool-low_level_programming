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

	if (name == NULL)
		name = "";
	if (owner == NULL)
		owner = "";

	my_dog = malloc(sizeof(*my_dog) * 3);
	my_dog->name = malloc(sizeof(name));
	my_dog->owner = malloc(sizeof(owner));

	if (my_dog == NULL || my_dog->name == NULL || my_dog->owner == NULL)
		return (NULL);

	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;

	return (my_dog);
}
