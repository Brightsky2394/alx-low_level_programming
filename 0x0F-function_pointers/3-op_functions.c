#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - Adds two numbers
 * @a: First Number
 * @b: Second Number
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - Substracts two numbers
 * @a: First Number
 * @b: Second Number
 * Return: Substraction of a and b
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - Multiplies two numbers
 * @a: First Number
 * @b: Second Number
 * Return: Multiplication of a and b
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - Divides two numbers
 * @a: First Number
 * @b: Second Number
 * Return: Division of a and b
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - Modulus of two numbers
 * @a: First Number
 * @b: Second Number
 * Return: Modulus of a and b
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
