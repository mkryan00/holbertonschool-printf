#include "main.h"
/**
 * _print_an_int - prints signed integers
 * @args: argument list
 *
 * Return: number of characters printed
 */
int _print_an_int(va_list args)
{
int ival = va_arg(args, int);
int count = 0;
int i = 0;
char a[20] = {0};

if (!ival)
{
;
}
if (ival == 0)
{
write(1, "0", 1);
count++;
return (count);
}
if (ival < 0)
{
ival = ival * -1;
write(1, "-", 1);
count++;
}
while (ival != 0)
{
a[i] = ival % 10 + '0';
ival = ival / 10;
i++;
}
i--;
while (i >= 0)
{
write(1, &a[i], 1);
count++;
i--;
}
return (count);
}
