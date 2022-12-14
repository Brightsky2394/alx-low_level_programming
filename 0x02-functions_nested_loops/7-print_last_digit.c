#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n : the number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
int ld = n % 10;
if (ld < 0)
ld *= -1;
_putchar(ld + '0');
return (0);
}
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
int r;
print_last_digit(98);
print_last_digit(0);
r = print_last_digit(-1024);
_putchar('0' + r);
_putchar('\n');
return (0);
}

