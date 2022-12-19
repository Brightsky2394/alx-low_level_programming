#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: integer a
 * @b: interger b
 */
void swap_int(int *a, int *b)
{
int p;
p = *a;
*a = *b;
*b = p;
}
