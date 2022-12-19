#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
int j = 0;
while (s[j] != '\0')
	j++;
for (j = j - 1; j >= 0; j--)
	_putchar([j]);
_putchar('\n');
}
