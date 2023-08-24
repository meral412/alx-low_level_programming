#include "main.h"
/**
 * leet - encode into 1337speak
 * @s: input value
 * Return: s value
 */

char *leet(char *s)
{
char leet[] = {'4', '3', '0', '7', '1'};
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == 'a' || s[i] == 'A')
{
s[i] = leet[0];
}
else if (s[i] == 'e' || s[i] == 'E')
{
s[i] = leet[1];
}
else if (s[i] == 'o' || s[i] == 'O')
{
s[i] = leet[2];
}
else if (s[i] == 't' || s[i] == 'T')
{
s[i] = leet[3];
}
else if (s[i] == 'l' || s[i] == 'L')
{
s[i] = leet[4];
}
}
return (s);
}

