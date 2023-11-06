#include "main.h"
/**
 * get_pt_func - calling the functions
 *
 * Return:
 */
int (*get_pt_func(char *s))(va_list)
{
	pt_f pts[] = {
		{"c", pt_character},
		{"s", pt_str},
		{NULL,NULL}};

	int i = 0;

	while (i < 3)
	{
		if (strcmp(s, == *pts[i].call))
		{
			return (pts[i].p);
		}
	i++;
	}
	return (0);
}

int _strcmp(char *s1, char *s2)
{
  int loop;
  while (s1[loop] != '\0')
    {
      if (s1[loop] == s2[loop])
	{
	  return (0);
	}
      loop++;
    }
  return (1);
}
