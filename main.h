#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _print_format(const char *format, va_list args);

int _print_a_char(va_list args);
int _print_a_string(va_list args);
int _print_a_percent(void);

#endif
