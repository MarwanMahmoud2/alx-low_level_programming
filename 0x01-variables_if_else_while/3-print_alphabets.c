#include<stdio.h>
/**
 * main - Prints alphabet in lowercase then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alp_lower[26] = "abcdefghijklmnopqrstuvwxyz";
char alp_upper[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int l;
int u;
for (l = 0; l < 26; l++)
{
putchar(alp_lower[l]);
}
for (u = 0; u < 26; u++)
{
putchar(alp_upper[u]);
}
putchar('\n');
return (0);
}
