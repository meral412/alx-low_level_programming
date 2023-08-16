#include "main.h"
#include <stdio.h>

/**
 * print_sign - determine if input number is greater, equal or less than 0.
 * @n: input number as an integer
 *
 * Return: 1 is greater than 0, 0 is 0 , -1 is less than 0.
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
_putchar('\n');
}
