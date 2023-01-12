#include <stdio.h>
/**
 * _putchar - writes character c to stdout
 * @c: character to print
 * Return: Always 0 on success
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
