#include "main.h"

/**
 * set_string - set the value of a pointer to a char
 * @s: the string pointed to
 * @to: the string to be change to
 * Return: nothing
 */

void set_string(char **s, char *to)
{
	*s = to;
}
