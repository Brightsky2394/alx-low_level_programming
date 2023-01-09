#include "main.h"
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
char *arr = malloc(size);
if (size == 0 || arr == 0)
	return (NULL);
while (size--)
	arr[size] = c;
return (arr);
}
