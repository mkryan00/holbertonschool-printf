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
unsigned int num;
int count = 0;
int i = 0;
char a[20] = {0};

if (ival == 0)
return (write(1, "0", 1));

if (ival < 0)
{
count += write(1, "-", 1); 
num = (unsigned int)(-(long)ival);
}
else
{
num = ival;
}
 
while (num > 0)
{
a[i++] = (num % 10) + '0';
num /= 10;
}

while (i--)
count += write(1, &a[i], 1);
 
return (count);
}
