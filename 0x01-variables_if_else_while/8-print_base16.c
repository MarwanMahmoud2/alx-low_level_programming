#include<stdio.h>
/**
 * main - Prints 16 base
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letters;
int num;
for (num = 0; num < 10; num++)
{
putchar((num % 10) + '0');
}
for (letters = 'a'; letters <= 'f'; letters++)
putchar(letters);
putchar('\n');
return (0);
}
