#include "function_pointers.h"

/**
 * int_index - it returns the index of the first element that for which the cmp
 *              does not return 0
 * @array: pointer to an array
 * @size: the size of the array
 * @cmp: a function pointer that compares each element in the array
 * Return: -1 on failure, on success returns the index of the array that match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, status;

	if (size < 1)
		return (-1);
	if (array && cmp)
	{
	for (i = 0; i < size; i++)
	{
		status = cmp(array[i]);
		if (status != 0)
			return (i);
	}
	}
	return (-1);
}
