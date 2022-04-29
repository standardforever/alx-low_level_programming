#include "main.h"

/**
 * factorial - Returns the factorial of a number
 * @n: the number to take the factorial
 * Return: the factorial of the input
 */
int factorial(int n)
{
	if (n >= 1)
		return (n * factorial(n - 1));
	else if (n < 0)
		return (-1);
	else
		return (1);
}
