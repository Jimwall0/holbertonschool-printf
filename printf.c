#include "main.h"
#include <stdio.h>
/**
 * _printf - printing function c
 * @format: string to hole format specifyer and characters
 * Return: input
 */
int _printf(const char *format, ...)
{
int (*point)(va_list args);/*initialize a pointer function*/
int i = 0;/*a counter to hold a value*/
va_list args;/*makes a list for us to loop through*/
va_start(args, format);/*specify what to loop through*/
if (*format != '\0')/*checks if format is valid*/
{
while (*format != '\0')/*runs through format*/
{
if (*format == '%')/*looks for '%'*/
{
format++;/*moves forward when found*/
point = get_pt_func(*format);/*grabs matching function*/
i += point(args);
if (point == NULL)
{
return (-1);
}
}
else
{
_putchar(*format);/*prints character*/
}
format++;
i++;
}
}
va_end(args);
return (i);
}
/**
 * _strlen - grabs the lenght of a string
 * @s: string being measured
 * Return: int
 */
int _strlen(const char *s)
{
int i = 0;
/*returns 0 if empty*/
if (s[i] == '\0')
{
return (0);
}
/*adds to i whenever we move*/
while (s[i] != '\0')
{
i++;
}
return (i);
}
