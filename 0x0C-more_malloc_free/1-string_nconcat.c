#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string to copy
 * @s2: second string to copy
 * @n: number of bytes of s2 to copy
 *
 * Return: char pointer to newly allocated place in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *s;

	if (s1 == NULL)
		i = 0;
	else
	{
<<<<<<< HEAD
		;
		n = j;
		/* add the length of the string */
		add = n + i;
=======
		for (i = 0; s1[i]; i++)
			;
>>>>>>> c49e737c48322f1ad5e28798dd6a43bbaef9546a
	}
	if (s2 == NULL)
		j = 0;
	else
<<<<<<< HEAD
		add = i + n;
	/* allocate the required memory using malloc */
	concat = malloc(sizeof(char) * (add + 1));
	if (concat == NULL)
		return (NULL);
	/*concatenate the two strings */
	for (i = 0; s1[i] != '\0'; i++)
		concat[i] = s1[i];
	for (k = 0; k < n; k++, i++)
		concat[i] = s2[k];
	concat[i] = '\0';
	return (concat);
=======
	{
		for (j = 0; s2[j]; j++)
			;
	}
	if (j > n)
		j = n;
	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		s[k] = s1[k];
	for (k = 0; k < j; k++)
		s[k + i] = s2[k];
	s[i + j] = '\0';
	return (s);
>>>>>>> c49e737c48322f1ad5e28798dd6a43bbaef9546a
}
