#include<stdio.h>
/**
 * main - Prints alphabet in lowercase but without q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alp[24] = "abcdfghijklmnoprstuvwxyz";
int a;
for (a = 0; a < 26; a++)
{
putchar(alp[a]);
}
putchar('\n');
return (0);
}
