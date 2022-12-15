#include "main.h"
/**
 * print_square - prints a square with _putchar, followed by a new line.
 * @size: size of square
 */
void print_square(int size)
{
int p;
int q;
q = 0;
if (size < 1)
	_putchar('\n');
while (q < size)
{
p = 0;
while (p < size)
{
_putchar('#');
p++;
}
_putchar('\n');
q++;
}
}
