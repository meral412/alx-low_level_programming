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
putchar(i + '0');
putchar('\n');
i++;
}
return (0);
}

