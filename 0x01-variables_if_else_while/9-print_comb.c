#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
i = 0;

while (i < 10)
{
i = i + 1;

putchar(i + '0');

if (i != 8 || i != 9)
{
putchar(',');
putchar(' ');
}
}
i++;
return (0);
}
