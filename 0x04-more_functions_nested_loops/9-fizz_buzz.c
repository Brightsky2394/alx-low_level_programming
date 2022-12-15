#include "main.h"
/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * multiples of three print Fizz instead of the number
 * and for the multiples of five print Buzz
 * Return: Always 0
 */
int main(void)
{
int a;
a = 1;
while (a <= 100)
{
if (a % 3 == 0 && a % 5 == 0)
	printf("FizzBuzz");
else if (a % 3 == 0)
	printf("Fizz");
else if (a % 5 == 0)
	printf("Buzz");
else
	printf("%d", a);
a++;
}
printf("\n");
return (0);
}
