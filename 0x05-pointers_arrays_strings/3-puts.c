#include "main.h"
/**
 * _putchar - prints a string, followed by a new line
 * @str: to start to print
 */

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
