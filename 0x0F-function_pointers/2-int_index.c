#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - it search for an integer
 * @array: the array to searche on
 * @size: the size of the array
 * @cmp: is a pointer to the function to be used to compare values
 * Retun: if size <= 0, return -1. if no element matches, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	i = 1;
	for (i = 0; cmp(array[i]) == 1; i++)
		;
	return (i);
}
