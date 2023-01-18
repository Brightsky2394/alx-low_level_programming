#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: The name to prints
 * @f: pointer to function
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
if (f != 0)
	f(name);
}

