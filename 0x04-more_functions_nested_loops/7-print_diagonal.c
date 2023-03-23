#include"main.h"
/**
 * print_diagonal - draws diagonal line
 * @n: number of diagonal line
 */
void print_diagonal(int n)
{
int count;
if (n > 0)
{
for (count = 0; count < n; count++)
_putchar('\\');
}
_putchar('\n');
}
