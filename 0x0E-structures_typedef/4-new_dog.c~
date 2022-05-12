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
	unsigned int i, nl, ol;
	/* declear a struct dog_t as dog */
	dog_t *dog;

	/* checking if name and owner is not equal null*/
	if (name == NULL || owner == NULL)
		return (NULL);

	/* assign the memory allocation of dog */
	dog = malloc(sizeof(dog_t));

	/* geting the length of name and assign memory for it */
	for (nl = 0; name[nl]; nl++)
		;
	nl++;
	dog->name = malloc(sizeof(char) * nl);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < nl; i++)
		dog->name[i] = name[i];
	dog->age = age;

	/* getting the length of name and assign memory for it */
	for (ol = 0; owner[ol]; ol++)
		;
	ol++;
	dog->owner = malloc(sizeof(char) * ol);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < ol; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
