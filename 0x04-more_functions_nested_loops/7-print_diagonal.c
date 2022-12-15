#include "main.h"
/**
 * print_diagonal - Draws a diagonal line using the \ character.
 * @n: The number of \ characters to be printed.
 */
void print_diagonal(int n)
{
int len;
int space;
if (n > 0)
{
for (len = 0; len < n; len++)
	_putchar(' ');
_putchar('\\');
if (len == n - 1)
continue;
_putchar('\n');
}
}
putchar('\n');
}
