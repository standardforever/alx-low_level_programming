#include "function_pointers.h"

/**
 * print_name - it print a name
 * @name: the name to be printed
 * @f: pointer to a function to the format on how to print the name
 * Return: Nothing of type void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
