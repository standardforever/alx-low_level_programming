#include "main.h"

/**
 * _strdup - eturns a pointer to a newly allocated space in memory, which
 *         contains a copy of the string given as a parameter.
 * @str: the string to perform action on
 * Return: pointer to the newly allcoted memory
 */

char *_strdup(char *str)
{
	char *ptr;
	int i = 0;

	if (str == NULL)
		return (NULL);
	while (*(str + i))
		i++;
	i++;
	ptr = malloc(sizeof(char) * i);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (*(str + i))
	{
		*(ptr + i) = *(str + i);
		i++;
	}
	*(ptr + i) = '\0';
	return (ptr);
}
