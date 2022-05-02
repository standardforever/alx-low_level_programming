#include <stdio.h>

/**
 * main - contains the main block
 * @argc: contains the number of arguments passed to the program
 * @argv: store the argc command in an array
 * Return: 0
 */
int main (int argc, char *argv[])
{
	if (!argv[0])
		printf("%i", argc);
	printf("%s\n", argv[0]);
	return (0);
}