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
int b = 50, d = 50, w = 50;
while (n <= 57)
{
while (m <= 57)
{
while (w <= 57)
{
putchar(n);
putchar(m);
putchar(w);
if ((n != 55))
{
putchar(44);
putchar(32);
}
w++;
}
m++;
d++;
w = d;
}
c++;
b++;
d = b;
m = c;
w = b;
n++;
}

putchar('\n');
return (0);
}
