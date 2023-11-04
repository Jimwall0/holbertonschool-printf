#include "main.h"
/**
* pt_char - char specifier
* Return: ..
*/
void pt_character(va_list args)
{
	char c = va_arg(args, int)
	putchar(c);
}

/**
 * pt_str - string specifier
 * Return:..
 */
void pt_str(va_list args)
{
	char str = va_arg(args, char *)
	putchar(str);
}

/**
 * pt_module - % specifier
 * Return:..
 */
void pt_mod(va_list args)
{
	char % = va_arg(args, )
	putchar(%);
}
