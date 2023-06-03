#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, n, m, c;
c = 0;
i = 0;
while (i < 1024)
{
n = i % 5;
m = i % 3;
if ((n == 0) || (m == 0))
{
c = c + i;
}
}
i++;
printf("%i\n", c);
return (0);
}
