#include<stdio.h>
/**
 * main - Prints 16 base
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char hex;
for (hex = 0; hex < 16; hex++)
{
putchar((hex % 16) + '0');
}
putchar('\n');
return (0);
}
