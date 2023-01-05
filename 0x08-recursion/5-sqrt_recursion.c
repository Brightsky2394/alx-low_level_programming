#include "main.h"
/**
 * sqrt - Calculates natural square root
 * @a: same number as n
 * @b: number that iterates from 1 to n
 * Return: the natural square root
 */
int sqrt(int a, int b)
{
if (b * b == a)
	return (b);
else if (b * b > a)
	return (-1);
return (sqrt(a, b + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: int number
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_recursion(int n)
{
return (sqrt(n, 1));
}

