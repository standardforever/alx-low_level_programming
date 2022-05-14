#include "function_pointers.h"

/**
 * print_name - it print a name
 * @name: the name to be printed
 * @f: a function_pointers pointing to the function that will be used to print
 *	the name.
 * Return: nothing (of type void)
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
