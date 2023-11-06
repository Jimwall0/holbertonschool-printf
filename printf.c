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
  while (*format != '\0')
    {
      if (*format == '%')
	{
	  format++;
	  get_pt_func(*format);
	}
      else
	{
	  _putchar(*format);
	}
      format++;
    }
  _putchar('\n');
  va_end(args);
  return (i);
}
