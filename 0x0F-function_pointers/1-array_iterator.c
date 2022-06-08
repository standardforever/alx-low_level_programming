#include "function_pointers.h"

/**
 * array_iterator - it executes a function given as a parameters on  each
 *               element of an array
 * @array: the array to perform the operation on
 * @size: the size of the array
 * @action: a function pointer that perform the action
 * Return: nothing (of type void)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
