include"main.h"
/**
 * print_square - function prints a square
 * @size: size of the square.
 */
void print_square(int size)
{
int s, mass;
if (size > 0 )
{
for (s = 0; s < size; s++)
{
for (mass = 0; mass < size; mass++)
{
_putchar('#');
}
if ( s == size - 1)
continue; 
_putchar('\n');
}
_putchar('\n');
}
