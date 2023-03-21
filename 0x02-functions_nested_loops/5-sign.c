#include<stdio.h>
#include"main.h"
/**
 * print_sign - prints sign n greater than zero or less than zero or otherwise
 *
 * Return: 1 if greater than zero , 0 if zero , -1 if less than zero
 * @n: The number to be checked.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
_putchar('\n');
}
}
