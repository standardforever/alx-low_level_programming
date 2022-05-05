#include "main.h"
#include <stdlib.h>

/**
 * str_concat - it concatenates two string
 * @s1: first string
 * @s2: the second string
 * Return: the newly allocated space in memory contain the concatenated string
 *	   and return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;

	j = 0;
	while (s2[j] != '\0')
		j++;
	i += j;
	s = malloc(sizeof(char) * (i + 1));
	if (s == NULL)
		return ('\0');

	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++, i++)
		s[i] = s2[j];
	s[i] = '\0';
	return (s);
}
