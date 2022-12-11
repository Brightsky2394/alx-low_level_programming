#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
int num;
char lz;
for (num = 0; num < 10; num++)
putchar((num % 10) + '0');
for (lz = 'a'; lz <= 'f'; lz++)
putchar(lz);
putchar('\n');
return (0);
}
