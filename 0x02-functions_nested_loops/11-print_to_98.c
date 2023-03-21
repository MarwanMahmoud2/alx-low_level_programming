#include<stdio.h>
#include"main.h"
/**
 * print_to_98 - prints from n to 98
 *
 * @n: The numbers will be entered
 */
void print_to_98(int n)
{
if (n <= 98)
{
printf("%d", n++);
printf("%d", n);
}
else
{
printf("%d", n--);
printf("%d", n);
}
}
