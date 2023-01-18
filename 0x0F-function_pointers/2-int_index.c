#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - searches for an integer
 * @array: array of type int
 * @size: size of array
 * @cmp: function with argument int and no return
 * Return: No element matches -1, if size <=0 -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int j;
if (array && cmp && size > 0)
	for (j = 0; j < size; j++)
		if (cmp(array[j]))
			return (j);
return (-1);
}
