#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints multiplication of two integers
 * @argc: The number of arguments supplied to the program
 * @argv: An array of pointers to the arguments
 * Return: 0 if true, 1 if false
 */
int main(int argc, char *argv[])
{
int num1, num2, prod;
if (argc != 3)
{
printf("Error\n");
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
prod = num1 *num2;
printf("%d\n", prod);
return (0);
}

