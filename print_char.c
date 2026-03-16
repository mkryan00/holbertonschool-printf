#include "main.h"

/**
 * _print_a_char - prints a single character
 * @args: argument list
 *
 * Return: 1 (number of chars printed)
 */
int _print_a_char(va_list args)
{
    char c = va_arg(args, int);
    write(1, &c, 1);
    return (1);
}
