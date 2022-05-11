#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - is of types struct of dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: return null if the function fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, j, k;
	/* declear a struct dog_t as dog */
	dog_t *dog;

	/* checking if name and owner is not equal null*/
	if (name == NULL || owner == NULL)
		return (NULL);

	/* assign the memory allocation of dog */
	dog = malloc(sizeof(dog_t));

	/* geting the length of name and assign memory for it */
	for (i = 0; name[i]; i++)
		;
	i++;
	dog->name = malloc(sizeof(char) * i);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (j = 0; j < i; j++)
		dog->name[j] = name[j];
	dog->age = age;

	/* getting the length of name and assign memory for it */
	for (k = 0; owner[k]; k++)
		;
	k++;
	dog->owner = malloc(sizeof(char) * k);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (j = 0; j < k; j++)
		dog->owner[j] = owner[j];
	return (dog);
}
