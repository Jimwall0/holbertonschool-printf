#include <stdio.h>
#include "main.h"
int main(void)
{
  _printf("Let's try to printf a simple sentence.\n");
  printf("Let's try to printf a simple sentence.\n");
  _printf("%, \n");
  printf("mod, \n");
  _printf("%c\n", 'H');
  printf("%c\n", 'H');
  return (0);
}
