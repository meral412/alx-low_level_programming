#include <stdio.h>
/**
 * main - Entry point function
 *
 * Return: Always 0 (no errors)
 */
int main(void)
{
char alphabet;
char Alphabet;

alphabet = 'a';
Alphabet = 'A';

do {
putchar(alphabet);
alphabet++;
} while (
alphabet <= 'z'
);
do {
putchar(Alphabet);
Alphabet++;
} while (
Alphabet <= 'Z'
);
putchar('\n');
return (0);
}
