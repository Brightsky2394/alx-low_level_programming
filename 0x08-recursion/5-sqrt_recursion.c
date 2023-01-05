#include "main.h"
int find_sqrt(int num, int r);
int _sqrt_recursion(int n);

/**
 * find_sqrt - Finds the natural square root of an inputted number
 * @num: The number to find the square root of
 * @r: The root to be tested
 * Return: If the number has a natural square root - the square root
 */
int find_sqrt(int num, int r)
{
if ((r * r) == num)
	return (r);
if (r == num / 2)
	return (-1);
return (find_sqrt(num, r + 1));
}
/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to return the square root of
 * Return: If n has a natural square root - the natural square root of n
 */
int _sqrt_recursion(int n)
{
int r = 0;
if (n < 0)
	return (-1);
if (n == 1)
	return (1);
return (find_sqrt(n, r));
}

