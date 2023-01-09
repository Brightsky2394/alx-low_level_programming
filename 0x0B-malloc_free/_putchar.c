#include "main.h"
/**
 * _putchar - write character c to stdout
 * @c: character to be print
 * Return: On success 1
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
