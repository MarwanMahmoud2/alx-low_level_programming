#include <stdio.h>
/**
 * main - Prints the base of 10.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char num[10] = "0123456789";
int n;
for (n = 0; n < 10; n++)
{
putchar(num[n]);
}
putchar('\n');
return (0);
}
