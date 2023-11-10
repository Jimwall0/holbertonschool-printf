#include "main.h"
/**
 * get_pt_func - calling the functions
 * @s: character specifier to be checked
 * Return: pointer to a another function
 */
int (*get_pt_func(char s))(va_list args)
{
/*structure holding our character specifier*/
pt_f pt[] = {
	     {'c', pt_character},
	     {'\0', dismay}
};
/*intitialize count holder*/
int i = 0;
/*loops through list for match*/
while (i < 1)
{
/*checks character then return fucntion*/
if (_strcmp(s, pt[i].c) == 0)
{
return (pt[i].p);
}
i++;
}
/*return null pointer function*/
return (pt[i].p);
}
/**
 * dismay - returns -1
 * @args: struct
 * Return: -1
 */
int dismay(va_list args)
{
(void)args;
return (-1);
}
/**
 * _strcmp - compares two character with eachother
 * @s1: first character
 * @s2: second character
 * Return: true or false
 */
int _strcmp(char s1, char s2)
{
if (s1 == s2)
{
return (0);
}
return (-1);
}
