#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

typedef struct pt
{
  char c;
  int (*p)(va_list args);
} pt_f;

int _putchar(char c);
int _printf(const char *format, ...);
int pt_character(va_list args);
int (*get_pt_func(char s))(va_list args);
int _strcmp(char s1, char s2);
int dismay(va_list args);


#endif
