#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c : the character
 * Return: 1 if letter is lowercase, 0 if not
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
	return (1);
else
	return (0);
}

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
int check;
check = _islower('i');
_putchar(check + '0');
return (0);
}
