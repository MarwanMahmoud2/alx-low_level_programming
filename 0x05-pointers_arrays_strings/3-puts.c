#include"main.h"
/**
 * _puts - Function prints a string followed by a new line
 *
 * @str: the string.
 */
void _puts(char *str)
{
int i;
for (i = 0; i >= 0; i++)
{
if (str[i] == '\0')
{
break;
}
else
{
_putchar(str[i]);
}
}
_putchar('\n');
}
