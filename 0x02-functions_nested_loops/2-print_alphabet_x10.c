#include<stdio.h>
#include"main.h"
/**
 * print_alphabet_x10 - Using function prints alphabet for 10x times
 */
void print_alphabet_x10(void)
{
  int r;
  for (r = 10; r >= 1 ; r--)
    {
  char i;
  for (i = 'a'; i <= 'z'; i++)
    {
      _putchar(i);
    }
  _putchar('\n');
    }
}
