#include"main.h"
/**
 * _puts - Function prints a string followed by a new line
 *
 * @str: the string.
 */
void _puts(char *str)
{
int i;
for (i = 0; i < *str; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
