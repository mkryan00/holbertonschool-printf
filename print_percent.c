#include "main.h"

/**
 * _print_a_percent - prints a literal percent sign
 *
 * Return: 1 (number of chars printed)
 */
int _print_a_percent(void)
{
    write(1, "%", 1);
    return (1);
}
