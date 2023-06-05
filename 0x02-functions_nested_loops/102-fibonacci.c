#include <stdio.h>
/**
 * main - Entry point
 * Return: return 0
 */

int main(void)
{
long int num1, num2, counter, sum;
num1 = 0, num2 = 1;
counter = 0;
while (counter <= 49)
{
sum = num1 + num2;
num1 = num2;
num2 = sum;
if (counter != 49)
	printf("%ld, ", sum);
else
	printf("%ld\n", sum);
counter++;
}
return (0);
}
