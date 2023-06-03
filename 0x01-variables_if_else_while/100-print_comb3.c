#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int n = 48, m = 49, c = 49;
while (n <= 57)
{
while (m <= 57)
{
putchar(n);
putchar(m);
if ((n != 56) || (m != 57))
{
putchar(44);
putchar(32);
}
m++;
}
c++;
m = c;
n++;
}
putchar('\n');
return (0);
}
