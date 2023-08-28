#include "main.h"

/**
 * _strspn - to get the length of prefix substring
 * @s: string
 * @accept: bytes
 * Return: insigned int
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int m, a;
for (m = 0; s[m] != '\0'; m++)
{
for (a = 0; accept[a] != s[m]; a++)
{
if (accept[a] == '\0')
return (m);
}
}
return (m);
}
