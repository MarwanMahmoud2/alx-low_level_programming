#include <stdio.h>
/**
 * main - Prints the lowercase alphabet in reverse.
 *
 * Return: Always 0.
 */
int main(void)
{
char rev_alp;
for (rev_alp = 'z'; rev_alp >= 'a'; rev_alp--)
putchar(rev_alp);
putchar('\n');
return (0);
}
