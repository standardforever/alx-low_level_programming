#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - it concatenate two strings
 * @s1: the first string
 * @s2: the second string to be concatenate to s1
 * @n: the number of byte from s2 that will be concatenated to si
 * Description: if n is greater or equal to the length of s2 use the
 *              entire string s2. if NUll is passed treat as empty string
 * Return: if function fail it should return NULL, else the returned pointer
 *        shall point to the newly allocated space in memory, which contains s1
 *        followed by s2 and null terminated.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, add;
	char *concat;

	add = 0;
	/* if Null character is passed treat as an empty string*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* find the lenth of the string */
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	/* check if n is greater or equal to s2 */
	if (n > j)
	{
		;
		n = j;
		/* add the length of the string */
		add = n + i;
	}
	else
		add = i + n;
	/* allocate the required memory using malloc */
	concat = malloc(sizeof(char) * add);
	/*concatenate the two strings */
	for (i = 0; s1[i] != '\0'; i++)
		concat[i] = s1[i];
	for (k = 0; k < n; k++, i++)
		concat[i] = s2[k];
	concat[i] = '\0';
	return (concat);
}
