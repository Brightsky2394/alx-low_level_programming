#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
int n;
for (n = 48; n < 58; n++)
{
if (!(n == 48 || n == 58))
{
putchar(',');
putchar(' ');
}
putchar(n);
}
putchar('\n');
return (0);
}
