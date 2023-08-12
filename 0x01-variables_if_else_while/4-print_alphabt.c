#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */


int main(void)
{
char letter;
letter = 'a';
while (letter <= 'z')
{
if (letter != 'q' && letter != 'e')
{
putchar(letter);
putchar(' ');
}
letter++;
}
putchar('\n');

return (0);
}
