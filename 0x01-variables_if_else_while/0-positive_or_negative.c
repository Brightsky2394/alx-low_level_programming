#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
int n;
extern time_t time(time_t *__timer) __THROW;
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%i is positive\n", n);
}
else if (n == 0)
{
printf("%i is zero\n", n);
}
else
{
printf("%i is negative/n", n);
}
return (0);
}
