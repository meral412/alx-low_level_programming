#include "main.h"

/**
 * _puts_recursion - to put the string followed by a new line.
 * @s: pointer to a string
 * Return: void
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
}
else
{
_putchar(*s);
_puts_recursion(s + 1);
}
}
