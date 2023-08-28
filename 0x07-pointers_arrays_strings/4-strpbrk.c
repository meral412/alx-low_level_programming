#include "main.h"

/**
 * _strpbrk - searh for a string
 * @s: string
 * @accept: string to match
 * Return: Pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
int m, a;
char *p;

m = 0;
while (s[m] != '\0')
{
a = 0;
while (accept[a] != '\0')
{
if (accept[a] == s[m])
{
p = &s[m];
return (p);
}
a++;
}
m++;
}
return (0);
}
