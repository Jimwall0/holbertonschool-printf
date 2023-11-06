#include "main.h"
/**
 * get_pt_func - calling the functions
 *
 * Return:
 */
int (*get_pt_func(char *s))(void v)
{
  
  pt_f pts[] = {
		{"c", pt_character},
		{NULL,NULL}};
  int i = 0;
  while (i < 1)
    {
      if (_strcmp(s, pts[i].c) == 0)
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
