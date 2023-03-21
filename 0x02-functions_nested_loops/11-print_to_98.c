#include<stdio.h>
#include"main.h"
/**
 * print_to_98 - prints from n to 98
 *
 * @n: The number will be entered
 */
void print_to_98(int n)
{
for (n = 0; n <= 9; n++)
{
_putchar((n % 10) + '0');
_putchar(',');
_putchar(' ');
}
}
