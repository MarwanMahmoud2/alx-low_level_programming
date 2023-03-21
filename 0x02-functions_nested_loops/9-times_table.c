#include<stdio.h>
#include"main.h"
/**
 * times_table - prints 9 times table starting with 0
 *
 */
void times_table(void)
{
int num, multi, pord;
for (num = 0; num <=9; num++)
{
_putchar('0');
for (multi = 1; multi <=9; multi++)
{
_putchar(',');
_putchar(' ');
pord = num * multi;
if(pord <= 9)
_putchar(' ');
else
_putchar((pord / 10) + '0');
_putchar((pord % 10) + '0');
}
_putchar('\n');
}
}
