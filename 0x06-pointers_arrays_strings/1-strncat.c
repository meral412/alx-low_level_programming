#include "main.h"

/**
 * _strncat - the function concentrates 2 strings
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: most number of bytes
 * Return: @dest
 */

char *_strncat(char *dest, char *src, int n)
{
char *end = dest;
int count = 0;
while (*end != '\0')
{
end++;
}
while (count < n && *src != '\0')
{
*end = *src;
end++;
src++;
count++;
}
*end = '\0';
return (dest);
}
