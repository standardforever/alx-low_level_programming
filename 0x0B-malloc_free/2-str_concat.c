#include "main.h"

/**
 * str_concat - it concatenate two strings
 * @s1: the first string
 * @s2: the second string
 * Return: a pointer two the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, count = 0;
	char *ptr;

	/* check if NUll is passed to the string if yes treat as an empty str*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* count the total length of the string */
	while (*(s1 + i))
		i++;
	count += i;
	i = 0;
	while (*(s2 + i))
		i++;
	count += i + 1;
	/* allocating the memory */
	ptr = malloc(sizeof(char) * count);
	if (ptr == NULL)
		return (NULL);
	/* concatenate the string  */
	i = 0, count = 0;
	while (*(s1 + i))
	{
		*(ptr + count) = *(s1 + i);
		count++, i++;
	}
	i = 0;
	while (*(s2 + i))
	{
		*(ptr + count) = *(s2 + i);
		count++, i++;
	}
	*(ptr + count) = '\0';
	return (ptr);
}
