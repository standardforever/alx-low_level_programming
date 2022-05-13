#include "function_pointers.h"

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
	i = 0;
	while (array[i] != '\0')
	{
		if (cmp(array[i]) == 1)
			break;
		i++;
	}
	return (1);
}
