#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: the number of argument
 * @av: the argument  to concat
 * Return: a pointer to the allocted memory for the concatenated string
 */

char *argstostr(int ac, char **av)
{
	int i = 0, j, count = 0;
	char *ptr = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
			j++, count++;
		i++;
	}
	ptr = malloc(sizeof(char) * count++);
	if (ptr == NULL)
		return (NULL);
	i = 0, count = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			ptr[count] = av[i][j];
			j++, count++;
		}
		ptr[count] = '\n';
		count++;
		i++;

	}
	return (ptr);
}
