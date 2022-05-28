#include "main.h"

/**
 * factorial - it returns the factorial of a given number using recursion
 * @n: the number to calculate the factorial
 * Return: the factorail of the number
 */

int factorial(int n)
{

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
