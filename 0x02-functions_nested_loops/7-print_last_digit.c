#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints last digit of a number
 *
 * @y: input number as an integer
 * Return: last digit
 */

int print_last_digit(int y)
{
int l;
l = y % 10;
if (l < 0)
{
_putchar(-l + 48);
return (-l);
}
else
{
_putchar(1 + 48);
return (l);
}
}
