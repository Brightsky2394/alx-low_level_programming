#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;
int array[4];
int a, b;
for (i = 0; i <= 99; i++)
{
for (j = 0; j <= 99; j++)
{
if (i != j)
{
array[0] = i / 10;
array[1] = i % 10;
array[2] = j / 10;
array[3] = j % 10;
a = i * 100 + j;
b = j * 100 + i;
if (a < b)
{
putchar(array[0] + '0');
putchar(array[1] + '0');
putchar(32);
putchar(array[2] + '0');
putchar(array[3] + '0');
if ((i != 98) || (j != 99))
{
putchar(44);
putchar(32);
}
}
}
}
}
putchar('\n');
return (0);
}
