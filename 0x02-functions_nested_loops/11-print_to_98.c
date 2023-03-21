#include<stdio.h>
#include"main.h"
/**
 * print_to_98 - prints from n to 98
 *
 * @n1: The numbers will be entered
 * @n2: The numbers will be entered
 * @n3: The numbers will be entered
 */
void print_to_98(int n1, int n2, int n3)
{
for (n1 = 0; n1 <= 9; n1++)
{
_putchar((n1 % 10) + '0');
_putchar(',');
_putchar(' ');
}
for (n2 = 1; n2 <= 9; n2++)
{
for (n3 = 0; n3 <= 8; n3++)
{
_putchar((n2 % 10) + '0');
_putchar((n3 % 10) + '0');
_putchar(',');
_putchar(' ');
}
}
}

