#include<stdio.h>
#include"main.h"
/**
 * _isalpha - Checks for alphabetic character
 *
 * Return: 1 if its letter, lowercase or uppercase, 0 otherwise
 * @c: The character to be checked.
 */
int _isalpha(int c)
{
if (c >= 'a' && c >= 'A' && c <= 'z' && c <= 'Z')
return (1);
else
return (0);
}
