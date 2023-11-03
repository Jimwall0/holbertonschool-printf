#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

typedef struct pt
{
	char *call;
	char (*p)();
} pt_f;

int _putchar(char c);
int _printf(const char *format, ...);
void pt_character(char c);
void pt_str(s);
void pt_mod;
int (*get_pt_func(char *s))(char)

#endif
