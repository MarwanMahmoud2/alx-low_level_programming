#include"main.h"
/**
 * swap_int - Function swaps the values of two integers
 *
 * @a: First integer.
 * @b: Second integer.
 */
void swap_int(int *a, int *b)
{
int num = *a;
*a = *b;
*b = num;
}
