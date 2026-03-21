#include "main.h"
#include <stdlib.h>

/**
 * _print_format - handles format parsing
 * @format: format string
 * @args: argument list
 *
 * Return: number of characters printed
 */
int _print_format(const char *format, va_list args)
{
    int i = 0, count = 0;

    if (!format)
		return (-1);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;  /* move to the specifier */

			/* Check for dangling '%' at end of string */
			if (format[i] == '\0')
				return (-1);

			/* Dispatch to the correct printer */
			if (format[i] == 'c')
				count += _print_a_char(args);
			else if (format[i] == 's')
				count += _print_a_string(args);
			else if (format[i] == '%')
				count += _print_a_percent();
			else if (format[i] == 'd' || format[i] == 'i')
			  count += _print_an_int(args);
			else
			{
				/* unknown specifier: print literally as %x */
				write(1, "%", 1);
				write(1, &format[i], 1);
				count += 2;
			}
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
		i++;
	}

	return (count);
}
