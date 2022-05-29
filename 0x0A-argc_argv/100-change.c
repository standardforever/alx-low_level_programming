#include <stdio.h>
#include <stdlib.h>

/**
 * main - contains the main code
 * @argc: the number of parameters input from terminal
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int ncent = 0, cent;

	if (argc > 2 || argc <= 1)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);
	if (cent < 0)
	{
		printf("%i\n", 0);
		return (0);
	}
	while (cent > 0)
	{
		if (cent >= 25)
			cent -= 25;
		else if (cent >= 10)
			cent -= 10;
		else if (cent >= 5)
			cent -= 5;
		else if (cent >= 2)
			cent -= 2;
		else if (cent >= 1)
			cent -= 1;
		ncent++;
	}
	printf("%i\n", ncent);
	return (0);
}
