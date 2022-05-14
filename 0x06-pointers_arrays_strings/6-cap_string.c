#include "main.h"

/**
 * cap_string - it capitalizes all words of a string
 * @s: the string to be capitalize
 * Description: word seperated by:  space, tabulation, new line, ,, ;, ., !,
 *		 ?, ", (, ), {, and }. will be capitalize.
 * Return: the capitalized string
 */
char *cap_string(char *s)
{
	int i, j;

	char cr [13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', };

	cr[10] = '{';
	cr[11] = '}';
	cr[12] = ')';
	for (i = 0; s[i]; i++)
	{
		if (i == 0 && (c[i] >= 'a' && c[i] <= 'z'))
			c[i] = c[i] - 32;
		for (j = 0; j < 13; j++)
		{
			if (cr[j] == s[i])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] = *(s + (i + 1)) - 32;
				}
			}
		}
	}
	return (s);
}
