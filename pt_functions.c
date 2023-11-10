#include "main.h"
/**
* pt_character - char specifier
* @args: struct
* Return: return character lenth otherwise false
*/
int pt_character(va_list args)
{
/*grabs the specified arguement*/
char temp = va_arg(args, int);
/*checks variable*/
if (!temp)
{
return (-1);
}
/*prints and returns character length*/
_putchar(temp);
return (1);
}
