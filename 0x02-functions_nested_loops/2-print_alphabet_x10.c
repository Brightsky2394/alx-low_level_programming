#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 *  followed by a new line
 */
void print_alphabet_x10(void)
{
int ten;
char la;
for (ten = 0; ten < 10; ten++)
{
for (la = 'a'; la <= 'z'; la++)
_putchar(la);
_putchar('\n');
}
}

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
print_alphabet_x10();
return (0);
}

