#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated by new dogs
 * @d: pointer to dog
 * Return: void
 */

void free_dog(dog_t *d)
{
	free(d);
}
