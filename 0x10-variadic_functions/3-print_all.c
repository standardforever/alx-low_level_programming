#include "variadic_functions.h"

/**
 * print_all - it prints anything
 * Description: where format is a list of types of arguments passed to the
 *             function.
 *     c: char
 *     i: integer
 *     f: float
 *     s: char * (if the string is NULL, print (nil) instead
 *     any other char should be ignored
 * @format: is a list of types
 */
void print_all(const char *const format, ...)
{
	int i = 0, j, c = 0;
	va_list op;
	char str[] = "cisf";

	va_start(op, format);
	while (format[i] && format)
	{	j = 0;
		while (str[j])
		{
			if (str[j] == format[i] && c)
			{
				printf(", ");
				break;
			}
			j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(op, int)), c = 1;
				break;
			case 'i':
				printf("%i", va_arg(op, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(op, double)), c = 1;
				break;
			case 's':
				if (format[i] != '\0')
				{
					printf("%s", va_arg(op, char *)), c = 1;
					break;
				}
				printf("%s", "(nil)");
				break;
		}
		i++;
	}
	printf("\n");
	va_end(op);
}
