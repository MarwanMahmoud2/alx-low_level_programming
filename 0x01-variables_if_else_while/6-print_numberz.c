#include <stdio.h>
/**
 * main - Prints the base of 10.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
for (n = 0; n < 10; n++)
{
putchar((n % 10) + '0');
}
putchar('\n');
return (0);
}
