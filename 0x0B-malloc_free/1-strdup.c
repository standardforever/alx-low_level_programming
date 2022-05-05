#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 *	     contains a copy of the string given
 * @str: the string given as parameter
 * Return: NULL if str = NULL, if success, the it returns a pointer to the
 *	  Duplicated string. it returns NULL if insufficient memory
 */
char *_strdup(char *str)
{
	char *s;
	int i;

	if (str == NULL)
		return ('\0');
	i = 0;
	while (str[i] != '\0')
		i++;
	s = malloc(sizeof(char) * (i + 1));
	for (i = 0; str[i] != '\0'; i++)
		s[i] = str[i];
	s[i] = '\0';
	return (s);
}
