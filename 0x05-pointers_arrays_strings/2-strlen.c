#include"main.h"
/**
 * _strlen - function returns the lenght of string
 *
 * @s : the string
 *
 * Return: The length of @s.
 */
int _strlen(char *s)
{
int i;
for (i = 0; s[i] != '\0');
{
i++;
}
return (i);
