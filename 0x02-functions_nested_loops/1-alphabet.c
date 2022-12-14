#include "main.h"
/**
 * print_alphabet -  prints the alphabet, in lowercase, followed by a new line
 */
void print_alphabet(void)
{
char la = 'a';
while (la <= 'z')
{
_putchar(la);
la++;
}
_putchar('\n');
}

