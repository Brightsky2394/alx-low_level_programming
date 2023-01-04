#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: integer n
 * Return: integer
 */
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}

/**
 *  _sqrt - _sqrt_recursion
 *  @n: integer paramter
 *  @m: integer parameter
 *  Return: sqrt
 */
int _sqrt(int n, int m)
{
if (n < 0)
	return (-1);
if ((m * m) > n)
	return (-1);
if (m * m == n)
	return (m);
return (_sqrt(n, m + 1));
}
