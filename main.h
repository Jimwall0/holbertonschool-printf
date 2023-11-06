#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

typedef struct pt
{
  char *c;
  int (*p)(int s);
} pt_f;

int _putchar(char c);
int _printf(const char *format, ...);
int pt_character(int c);
int (*get_pt_func(char *s))(char o);
int _strcmp(char *s1, char *s2);

#endif
