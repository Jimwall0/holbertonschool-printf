#include "main.h"
#include <string.h>
/**
 * pt_str - str
 * @args: structure
 * Return: str
 */
int pt_str(va_list args)
{
	int i = 0;
	char *s = va_arg(args, char *);

/* iterate through string and print */
	for (i = 0; s[i] != '\0'; ++i)
	{
	_putchar(s[i]);
	}
	return (i - 1);
}
