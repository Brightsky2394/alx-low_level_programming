#include "main.h"
/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
int j = 0;
for (; str[j] != '\0'; j++)
{
if ((j % 2) == 0)
	_putchar(str[j]);
else
	continue;
}
_putchar('\n');
}
