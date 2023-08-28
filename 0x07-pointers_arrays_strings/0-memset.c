#include "main.h"

/**
 * _memset - fills the memory with the constant byte
 * @s: pointer to put the constant
 * @b: the constant
 * @n: max bytes to use
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int m;
for (m = 0; n > 0; m++, n--)
{
s[m] = b;
}
return (s);
}
