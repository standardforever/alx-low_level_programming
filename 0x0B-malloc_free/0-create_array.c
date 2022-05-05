#include "main.h"
#include <stdlib.h>

/**
 * create_array - it creates an array of chars, and initialize it
 *		  with a specific char
 * @size: the size of the array
 * @c: the character to initialize the array with
 * Return: NULL  if size = 0 else a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return ('\0');

	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return ('\0');

	for (i = 0; i <= size; i++)
	{
		s[i] = c;
	}
	return (s);
}