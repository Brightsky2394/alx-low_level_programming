#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of arguments passed into the program
 * @argc: Counts arguments
 * @argv: Arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
