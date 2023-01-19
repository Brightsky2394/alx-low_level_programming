#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: Number of Arguments
 * @...: Arguments Variadic
 * Return: sum of its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int sum = 0, i;
va_list param;
if (n == 0)
	return (0);
va_start(param, n);
for (i = 0; i < n; i++)
	sum += va_arg(param, int);
va_end(param);
return (sum);
}
