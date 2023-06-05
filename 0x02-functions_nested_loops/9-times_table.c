#include "main.h"
/**
 * times_table -  prints the 9 times table, starting with 0
 * Return: return 0 on success
 */
void times_table(void)
{
int a, b, c;
for (a = 0; a <= 9; a++)
{
b = 0;
while (b <= 9)
{
c = a * b;
if (c > 9)
{
_putchar(c / 10 + '0');
_putchar(c % 10 + '0');
}
else if (b != 0)
{
_putchar(' ');
_putchar(c + '0');
}
else
	_putchar(c + '0');
if (b != 9)
{
_putchar(',');
_putchar(' ');
}
b++;
}
_putchar('\n');
}
}
