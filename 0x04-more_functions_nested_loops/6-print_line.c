#include"main.h"
/**
 * print_line - draws straight line
 * @n: number of lines
 */
void print_line(int n)
{
int count;
if (n > 0)
{
for (count = 0; count < n; count++)
_putchar('_');
}
_putchar('\n');
}
