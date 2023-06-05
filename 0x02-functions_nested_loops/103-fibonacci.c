#include <stdio.h>
/**
 * main - Entry point
 * Return: return 0
 */
int main(void)
{
int num1, num2, num3, num4;
num1 = 1, num2 = 2, num3 = 0;
while (num2 < 4000000)
{
if (num2 % 2 == 0)
	num3 += num2;
num4 = num2;
num2 += num1;
num1 = num4;
}
printf("%d\n", num3);
return (0);
}
