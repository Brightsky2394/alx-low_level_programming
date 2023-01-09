#include "main.h"
/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char
 * @size: The size of the array
 * @c: character to initialize with
 * Return: The array filled
 */
char *create_array(unsigned int size, char c)
{
unsigned int j;
char *r;
if (size == 0)
	return (NULL);
r = malloc(size * sizeof(char));
if (size == NULL)
	return (NULL);
for (j = 0; j < size; j++)
{
r[i] = c;
}
return (r);
}

