#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
char *start = dest;
int count = 0;
while (count < n && *src != '\0')
{
*dest = *src;
dest++;
src++;
count++;
}
while (count < n)
{
*dest = '\0';
dest++;
count++;
}
return (start);
}
