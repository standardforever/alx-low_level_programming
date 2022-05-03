#include <stdio.h>

#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int i, j, add = 0;

<<<<<<< HEAD
	if (argc > 1)
=======
	for (i = 1; i < argc; i++)
>>>>>>> a314f9be066ff0a274bfd53c2c28dd0a6d21c1eb
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
<<<<<<< HEAD
	else
	{
		printf("0\n");
		return (0);
	}
	if (j == 0)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else if (j > 0)
		printf("%i\n", j);
=======
	printf("%d\n", add);
>>>>>>> a314f9be066ff0a274bfd53c2c28dd0a6d21c1eb
	return (0);
}
