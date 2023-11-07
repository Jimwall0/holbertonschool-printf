#include "main.h"
/**
 * get_pt_func - calling the functions
 *
 * Return:
 */
int (*get_pt_func(char s))(va_list args)
{
  pt_f pt[] = {
	       {'c', pt_character},
	       {'\0', dismay}
  };
  int i = 0;
  while (i < 1)
    {
      if (_strcmp(s, pt[i].c) == 0)
	{
	  return (pt[i].p);
	}
      i++;
    }
  return (pt[i].p);
}

int dismay(va_list args)
{
  (void)args;
  return (-1);

}

int _strcmp(char s1, char s2)
{
  if (s1 == s2)
    {
      return (0);
    }
  return (-1);
}
