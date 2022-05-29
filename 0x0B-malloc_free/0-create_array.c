#include "main.h"

/**
 * create_array - it create an array of character and initialize it with char
 * @size: the size of the array
 * @c: the char to initialize to the array
 * Return: NULL if size= 0 or if it fails else pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ptr = NULL;

	if (size == 0)
		return ('\0');
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return ('\0');

	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
