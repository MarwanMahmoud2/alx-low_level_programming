#include<stdio.h>
#include"main.h"
/**
 * print_sign - prints sign if n greater than zero or less than zero or otherwise
 *
 * Return: 1 if greater than zero , 0 if zero , -1 if less than zero
 * @n: The number to be checked.
 */
int print_sigh(int n)
{
if (n > 0)
_putchar(%d is greater than zero, n);
return (1);
else if (n == 0)
_putchar(%d is zero, n);
return (0);
else
_putchar(%d is less than zero, n);
return (-1);
}
