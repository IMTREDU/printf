#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
int print_char(va_list val);
int print_percent(void);
int print_string(va_list val);
int _printf(const char *format, ...);

#endif /* PRINTF_H */
