#include <stdio.h>

/**
 * linear_search - search an array of numbers using linear search
 * @array: The array to search
 * @size: The size of the array
 * @value: The value to search for
 * Return: The matched value else -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
