#include "main.h"
/**
* pt_char - char specifier
* Return: ..
*/
int pt_character(va_list args)
{
  char temp = va_arg(args, int);
  if (!temp)
    {
      return (-1);
    }
  _putchar(temp);
  return (1);
}
