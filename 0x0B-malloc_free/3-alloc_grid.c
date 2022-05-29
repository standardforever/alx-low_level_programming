#include "main.h"

/**
 * alloc_grid - it returns a pointer to a two dimensional arrays of integer
 * @width: the width of the array
 * @height: the height of the array
 * Return: NULL if width or height is 0, negative or faill
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr = NULL;

	/* check if width and height is less than 1 */
	if (width <= 0 || height <= 0)
		return (NULL);
	/* allocating a memory */
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			for (i--; i >= 0; i--)
			free(ptr[i]);
			free(ptr);
			return (NULL);
		}

	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	return (ptr);
}
