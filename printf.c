#include "main.h"
#include <stdio.h>
/**
 * _printf - printing function c
 * Return: input
*/
int _printf(const char *format, ...)
{
	int i;
	va_list args;
	va_start(args, format);

	i = 0;
	/* Checking for Null byte */
	while (*format != '\0')
	{
		/* Checking for % to initiate format */
		if (*format == '%')
		{
			putchar(' ');
			format++;
		}
	putchar(*format);
	format++;
	}
	return (i);
}
