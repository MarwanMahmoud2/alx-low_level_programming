#include"main.h"
/**
 * _isdigit - functio checks for a digit (0 - 9).
 *
 * @c: the digit to be checked.
 *
 * Return: 1 for digit, otherwise 0.
 */
int _isdigit(int c)
{
if (c >= 0 && c <= 9)
return (1);
else
return (0);
}
