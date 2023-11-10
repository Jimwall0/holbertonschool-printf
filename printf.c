#include "main.h"
#include <stdio.h>
/**
 * _printf - printing function c
 * @format: string to hole format specifyer and characters
 * Return: input
 */
int _printf(const char *format, ...)
{
int (*point)(va_list args);
int i = 0;
va_list args;
va_start(args, format);
if (*format != '\0')
{
while (*format != '\0')
{
if (*format == '%')
{
format++;
point = get_pt_func(*format);
if (point == NULL)
{
return (-1);
}
i += point(args);
}
else
{
_putchar(*format);
}
format++;
}
}
va_end(args);
return (i);
}
