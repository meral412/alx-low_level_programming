#include "main.h"

/**
 * _strchr - fills the memory with the constant type
 * @s: pointer to put the constant
 * @c: constant
 * Return: pointer to s
 */

char *_strchr(char *s, char c)
{
int m;

for (m = 0; s[m] >= '\0' ; m++)
{
if (s[m] == c)
{
return (s + m);
}
}
return ('\0');
}

