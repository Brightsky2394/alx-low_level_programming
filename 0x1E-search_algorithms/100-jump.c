#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers using the
 * Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size:  number of elements in array
 * @value: value to search for
 * Return: Index where value is located or -1
 */

int jump_search(int *array, size_t size, int value)
{
size_t step, pos, j, min;

if (array == NULL || size == 0)
	return (-1);
pos = 0, min = 0;
step = sqrt(size);
while (pos < size && array[pos] < value)
{
printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
min = pos;
pos += step;
}
printf("Value found between indexes [%lu] and [%lu]\n", min, pos);

if (pos > (size - 1))
	pos = size - 1;
for (j = min; j <= pos && array[j] <= value; j++)
{
printf("Value checked array[%lu] = [%d]\n", j, array[j]);
if (array[j] == value)
	return (j);
}
return (-1);
}
