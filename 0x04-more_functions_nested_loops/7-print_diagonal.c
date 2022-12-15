#include "main.h"
/**
 * print_diagonal - Draws a diagonal line using the \ character.
 * @n: The number of \ characters to be printed.
 */
void print_diagonal(int n)
{
int a;
int b;
a = 0;
while (n > 0)
{
b = a;
while (b > 0)
{
_putchar(' ');
i--;
}
_putchar('\\');
_putchar('\n');
c++;
n--;
}
if (a < 1)
_putchar('\n');
}


