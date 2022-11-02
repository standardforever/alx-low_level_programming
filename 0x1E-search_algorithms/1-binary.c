#include <stdio.h>

/**
 * binary_search - Binary search Algorithm
 * @array: The array to search for
 * @size: The size of the array
 * @value: The value to search
 * Return: The matched value else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t middle = 0, left = 0, right = size, count  = 0, i;

	while (left < right)
	{
		printf("Search in array:");
		for (i = left; i < right; i++)
		{
			printf(" %i", array[i]);
			if (i + 1 != right)
				printf(",");
		}
		printf("\n");

		count = (right - left - 1) / 2;
		middle = left + count;

		if (value == array[middle])
			return (middle);
		else if (value > array[middle])
			left = middle + 1;
		else if (value < array[middle])
			right = middle;

	}
	return (-1);
}
