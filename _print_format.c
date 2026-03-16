#include "main.h"
#include <stdlib.h>

#include "main.h"

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

    while (format[i])
    {
        if (format[i] == '%')
        {
            i++;
            if (format[i] == 'c')
                count += _print_a_char(args);
            else if (format[i] == 's')
                count += _print_a_string(args);
            else if (format[i] == '%')
                count += _print_a_percent();
            else
            {
                /* print unknown specifier as literal %x */
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
