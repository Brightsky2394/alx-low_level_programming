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
 *  @n: integer parameter
 *  @m: integer parameter
 *  Return: sqrt
 */
int _sqrt(int n, int m)
{
int square;
square = m * m;
if (square == n)
	return (m);
else if (square < n)
	return (_sqrt(n, m + 1));
else
	return (-1);
}
