#include "main.h"

/**
 * _pow_recursion - it returns value of x raise to pow of y using recursion
 * @x: int value
 * @y: int value
 * Return: the value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y > 0)
		x = x * _pow_recursion(x, y - 1);
	return (x);
}
