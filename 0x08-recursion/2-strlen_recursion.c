#include "main.h"

/**
 * _strlen_recursion - returns the length of the string
 * @s: pointer to string
 * Return: int
 */

int _strlen_recursion(char *s)
{
int m = 0;
if (*s > '\0')
{
m += _strlen_recursion(s + 1) + 1;
}
return (m);
}
