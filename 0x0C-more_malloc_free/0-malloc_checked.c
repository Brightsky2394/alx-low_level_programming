#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: size to allocate
 * Return: Pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *r;
r = malloc(b);
if (r == NULL)
exit(98);
return (r);
}

