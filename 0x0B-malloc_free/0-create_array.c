#include "main.h"
#include <stdio.h`>
#include <stdlib.h>
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
char *s;
if (size == 0)
	return (NULL);
s = malloc(size * sizeof(char));
if (size == NULL)
	return (NULL);
for (j = 0; j < size; j++)
{
s[i] = c;
}
return (s);
}

