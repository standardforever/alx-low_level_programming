#include "main.h"

/**
 * assign_mem - assign a memory to a string that will be converted into array
 * @str: the string
 * Return: a pointer to the allocated memeory
 */

char **assign_mem(char *str)
{
	char **ptr = NULL;
	int i = 0, j = 0, count, k = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	while (*(str + i))
	{
		if ((*str + i) == ' ')
		{
			i++;
			continue;
		}
		while (*(str + i))
		{
			if (*(str + i) == ' ')
				break;
			i++, j = 1;
		}
		if (j == 1)
			count++, j = 0;
		i++;
	}
	ptr = (char **)malloc(sizeof(char *) * (count + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0, count = 0;
	while (*(str + i))
	{
		if (*(str + i) == ' ')
		{
			i++;
			continue;
		}

		while (*(str + i))
		{
			if (*(str + i) == ' ')
				break;
			count++, i++;
		}
		ptr[k] = malloc(sizeof(char) * (count + 1));
		if (ptr[k] == NULL)
		{
			for (k--; k >= 0; k--)
				free(ptr[k]);
			free(ptr);
		}
		count = 0, k++, i++;
	}
	return (ptr);
}

/**
 * strtow - it split a string into words
 * @str: the string to split
 * Return: it returns a pointer to an array of strings
 */

char **strtow(char *str)
{
	int  i = 0, j = 0, k = 0;
	char **ptr = assign_mem(str);

	if (ptr == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			i++;
			continue;

		}

		while (str[i] != ' ')
		{
			ptr[k][j] = str[i];
			i++, j++;
		}
		ptr[k][j] = '\0';
		i++, k++, j = 0;
	}
	return (ptr);

}
