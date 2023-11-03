#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

typedef struct print
{
	char *call;
	char (*p)();
} pt;

int _putchar(char c);
int _printf(const char *format, ...);
void pt_char(char c);
void pt_str(s);
#endif
