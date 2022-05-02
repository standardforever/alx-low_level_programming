#include <stdio.h>

/**
 * main - it print all argument it recieve
 * @argc: contains the number of argument pass to the program
 * @argv: store the argc command in an array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
