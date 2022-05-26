#include "main.h"

/**
 * _alloc_mem - it allocate a memory using malloc
 * @count: the total of of count of the parametr.
 * Return: pointer to the allocated memory
 */

char *_alloc_mem(int count)
{
	char *str = malloc(count * sizeof(int));

	if (str == NULL)
		return ('\0');
	return (str);
}

/**
 * _count - it count the total nubmers of character given
 * @format: is a pointer that point to the string to be counted
 * @args: it takes va_list of
 * Return: an int of the count
 */
int _count(const char *format, va_list args)
{
	int i, j, count = 0;
	const char *s;

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					count--;
					break;
				case 's':
					count -= 2;
					s = va_arg(args, const char *);
					for (j = 0; s[j]; j++)
						count++;
					break;
				default:
					break;
			}
		}
		count++;
	}
	return (count++);
}

/**
 * _printf - it print an input
 * @format: it's a pointer to a string
 * Description:  it takes a string and check if it sees '%s' or '%c, if yes
 *               it takes the matched argumetn from arg_list and print it.
 * Return: it returns the string pointered to by format.
 */

int _printf(const char *format, ...)
{
	int i = 0, k = 0, j, count;
	va_list arg;
	const char *s;
	char *str;

	va_start(arg, format);
	count = _count(format, arg);
	va_end(arg);
	str = _alloc_mem(count);

	va_start(arg, format), count = 0;
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%' && format[i + 1] == '\0')
		{
			str[k] = format[i];
			k++, count++;
		}
		else if (format[i] == '%' && format[i + 1] == 'c')
		{
			str[k] = va_arg(arg, int);
			i++, k++, count++;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			s = va_arg(arg, const char *);
			while (s[j])
			{
				str[k] = s[j];
				 k++, j++, count++;
			}
			k++, i++, count++, j = 0;
		}
		else
		{
			str[k] = format[i];
			 count++, k++;
		}
	}
	return (write(1, str, count));
}
