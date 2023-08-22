#include "main.h"
/**
 * puts2 - the function which prints one character of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
int longi = 0;
int t = 0;
char *m = str;
int a;

while (*m != '\0')
{
m++;
longi++;
}
t = longi = 1;
for (m = 0; a <= t; m++)
{
if (a % 2 == 0)
{
_putchar(str[a]);
}
}
_putchar('\n');
}
