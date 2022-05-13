#include "main.h"

/**
 * string_toupper - it changes all lower case letters to upper
 * @s: the string to be change to uppper
 * Return: the uppercase string
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
