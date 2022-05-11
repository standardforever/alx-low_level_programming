#include "dog.h"
#include <stdio.h>

/**
 * print_dog - it print a struct dog
 * @d: pointer to the struct dog
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		d->name = "nil";
	if (d->owner == NULL)
		d->owner = "nil";
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
