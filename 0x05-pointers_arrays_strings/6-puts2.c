#include"main.h"
/**
 * puts2 - Function prints a reversed string
 *
 * @str: the string.
 */
void puts2(char *str)
{
int i = 0;
while (i >= 0)
{
if (str[i] == '\0')
{
_putchar('\n');
break;
}
if (str[i] % 2 == 0)
{
_putchar(str[i]);
i++;
}
}
}
