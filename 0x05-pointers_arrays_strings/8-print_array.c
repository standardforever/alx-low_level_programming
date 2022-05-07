#include "main.h"
#include <stdio.h>

/**
 * print_array - it print the nth element of an array
 * @a: where a is the array
 * @n: the number of element of the array
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (a[i] != a[n])
	{
		printf("%d", a[i]);
		if (a[i] != a[n - 1])
			printf(", ");
		i++;
	}
	printf("\n");
}
