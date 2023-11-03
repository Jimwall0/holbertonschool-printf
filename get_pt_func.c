#include "main.h"
/**
 * get_pt_func - calling the functions
 *
 * Return:
 */
int (*get_pt_func(char *s)(char))
{
	pt_f pts[] = {
		{"c", pt_character},
		{"s", pt_str},
		{"%", pt_mod},
		{NULL,NULL}};
	int i = 0;

	while (i < 3)
	{
		if (strcmp(s, pts[i].pt) == 0)
		{
			return (pts[i].f);
		}
	i++;
	}
	return (0);
}
