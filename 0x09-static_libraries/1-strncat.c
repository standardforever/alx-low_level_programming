#include "main.h"

/**
 *_strncat - function that concatenate two strings
 * @dest: concatenate src to dest
 * @src: concatenate to dest
 * @n: the number of string in src to be concatenate to dest
 * Return: Return a pointer to the resulting dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int length, length2, i;

	length = 0;
	length2 = 0;

	/* get the length of the string*/
	while (dest[length] != '\0')
		length++;
	while (src[length2] != '\0')
		length2++;
	/* concatenate the two strings */
	for (i = 0; i <= (n - 1); i++, length++)
	{
		if (i == length2)
			break;
		dest[length] = src[i];
	}
	return (dest);
}
