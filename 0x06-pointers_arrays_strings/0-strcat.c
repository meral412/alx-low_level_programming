#include "main.h"

/**
 * _strcat - the function that concentrates two strings
 * @dest: pointer to destination output
 * @src: pointer to source input
 * Return: pointer to resulting string @dest
 */


char *_strcat(char *dest, char *src)
{
char *end = dest;
while (*end != '\0')
{
end++;
}
while (*src != '\0')
{
*end = *src;  
end++;
src++;
}    
*end = '\0';
return (dest);
}
