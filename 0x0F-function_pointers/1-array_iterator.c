#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - it executes a function given as a parameter on each element
 *		   of an array
 * @array: a pointer to the array
 * @size: the size of the array
 * @action: is a pointer to the function you need to use to take action
 * Return: nothing (of type void)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
