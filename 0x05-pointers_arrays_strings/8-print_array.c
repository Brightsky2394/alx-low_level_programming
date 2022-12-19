#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: array
 * @n: number of values to be printed
 */
void print_array(int *a, int n)
{
int k;
for (k = 0; k < n; k++)
{
printf("%d", a[k]);
if (k != n - 1)
	printf(", ");
}
printf("\n");
}
