#include "main.h"

int set_bit(unsigned long int *n, unsigned int index)
{

	unsigned long int count, i, j = 0, hold;


	for (i = 0; n != 0 ; i++, j++)
	{
		hold = *n;
		*n = *n >> 1;
		count = *n * 2;
		count = hold - count;
		if (j == index)
		{
			count = 1;
			break;
		}
	}
	if (n == 0 && j != index)
		return (-1);
	return (count);
}