#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - contains the main code
 * @argc: the number of parameters input from terminal
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, add = 0;
	char *c;

	if (argc - 1 == 0)
	{
		printf("%i\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		c = argv[i];

		if (isdigit(*c) == 0)
		{
			printf("Error\n");
			return (1);
		}
		add += atoi(argv[i]);
	}
	printf("%i\n", add);
	return (0);
}
