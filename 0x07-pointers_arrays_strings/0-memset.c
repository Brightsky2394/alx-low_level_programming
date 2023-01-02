#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: source string
 * @b: the desired value
 * @n: number of bytes to be changed
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n);
{
unsigned int i = 0;
while (i < n)
{
*(s + i) = b;
i++;
}
return (s);
}
