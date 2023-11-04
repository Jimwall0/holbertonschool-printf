#include "main.h"
#include <unistd.h>

/**
 * _putchar - | putchar
 * @c: var
 * Return: var
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
