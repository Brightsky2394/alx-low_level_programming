#include <stdio.h>
#include "main.h"
/**
 * print_to_98 -  prints all natural numbers from n to 98
 * @n: the starting number
 */
void print_to_98(int n)
{
if (n >= 98)
{
while (n > 98)
	printf("%d", n--);
printf("%d\n", n);
}
else
{
while (n < 98)
	printf("%d", n++);
printf("%d\n", n);
}
}
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
print_to_98(0);
print_to_98(98);
print_to_98(111);
print_to_98(81);
print_to_98(-10);
return (0);
}
