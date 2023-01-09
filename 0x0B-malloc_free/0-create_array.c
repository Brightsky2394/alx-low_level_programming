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
if (size <= 0)
	return (0);
r = malloc(sizeof(char) * size);
if (r == 0)
	return (0);
for (j = 0; j < size; j++)
	r[i] = c;
r[i] = '\0';
return (r);
}
