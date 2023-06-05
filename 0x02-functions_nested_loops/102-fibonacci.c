#include <stdio.h>
/**
 * main - Entry point
 * Return: return 0
 */

int main(void)
{
int num1, num2, counter, sum;
num1 = 0, num2 = 1;
counter = 0;
while (counter <= 49)
{
sum = num1 + num2;
num1 = num2;
num2 = sum;
if (counter != 49)
	printf("%d, ", sum);
else
	printf("%d\n", sum);
counter++;
}
return (0);
}
