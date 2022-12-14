#include "main.h"
/**
 * _isalpha -  checks for alphabetic character
 * @c: character to be checked
 *
 * Return: 1 if character is letter, otherwise 0
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
int check;
check = _isalpha('H');
_putchar(check + '0');
check = _isalpha('o');
_putchar(check + '0');
check = _isalpha(108);
_putchar(check + '0');
check = _isalpha(';');
_putchar(check + '0');
_putchar('\n');
return (0);
}
