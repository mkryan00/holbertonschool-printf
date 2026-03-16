#include "main.h"

/**
 * _print_a_string - prints a string
 * @args: argument list
 *
 * Return: number of characters printed
 */
int _print_a_string(va_list args)
{
    char *str = va_arg(args, char *);
    int count = 0;

    if (!str)
        str = "(null)";

    while (*str)
    {
        write(1, str, 1);
        str++;
        count++;
    }

    return (count);
}
