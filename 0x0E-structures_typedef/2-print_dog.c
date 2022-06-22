#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints struct dog
 * @d: pointer to struct dog
 * Return: void
 */

void print_dog(struct dog *d)
{

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);

}
