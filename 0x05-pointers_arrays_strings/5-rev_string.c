#include "main.h"
#include <stdio.h>
/**
 * rev_string - revers a string
 * @s: the string to be reverse
 * Return: nothing
 */
void rev_string(char *s)
{
	int i, len;

	char temp;
	/* is use to collect the length of a string */
	len = 0;
	while (s[len] != '\0')
		len++;

	/* use for loop to iterate the string */
	for (i = 0; i < len / 2 ; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}

}
