#include "head.h"
/**
 * 
 */
int _printf(const char *format, ...)
{
  int num;
  if (format == NULL)
    {
      exit(98);
    }
  for (num = 0; format[num] != '\0'; num++)
    {
      write(1, format[num], 1);
    }
  return (0);
}
