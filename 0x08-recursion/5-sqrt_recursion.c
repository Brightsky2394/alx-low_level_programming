#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer number
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}

/**
 * _sqrt - Calculates natural square root
 * @m: number to determine if square root
 * @i: iterate number
 * Return: the natural square root
 */

int _sqrt(int m, int i)
{
int sqrt = i * i;
if (sqrt > m)
	return (-1);
if (sqrt == m)
	return (i);
return (_sqrt(n, i + 1));
}

