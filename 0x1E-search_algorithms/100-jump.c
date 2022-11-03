#include <stdio.h>
#include <math.h>

/**
 * jump_search - Jump Search Algorithm
 * @array: The array to perform the search on
 * @size: The size of the array
 * @value: The value to find
 * Return: The index of the matched value else -1
 */

int jump_search(int *array, size_t size, int value)
{
	int jump = sqrt(size);
	size_t i, x, prev = 0, next = 0;

	for (i = 0; i < size; i += jump)
	{
		if (array[i] >= value)
		{
			prev = i - jump;
			next = i;
			if (i == 0)
			{
				prev = 0;
				next = i + jump;
			}
			printf("Value found between indexes [%lu] and [%lu]\n", prev, next);
			break;
		}
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
	}
	if (prev == 0 && next == 0)
	{
		printf("Value found between indexes [%lu] and [%lu]\n", i - jump, i);
		prev = i - jump;
		next = size - 1;

	}
	for (x = prev; x <= next; x++)
	{
		printf("Value checked array[%lu] = [%i]\n", x, array[x]);
		if (array[x] == value)
			return (x);
	}
	return (-1);
}
