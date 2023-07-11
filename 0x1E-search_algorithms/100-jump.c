#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: pointer to first element of an array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: Index where value is located or -1
 */

int jump_search(int *array, size_t size, int value)
{
size_t index, step, res, j, min;
if (array == NULL || size == 0)
	return (-1);

step = sqrt(size);
min = 0;
for (index = 0; index < size && array[index] < value; )
{
printf("Value checked array[%lu] = [%d]\n", index, array[index]);
min = index;
index += step;
}
printf("Value found between indexes [%lu] and [%lu]", min, index);
res = size - 1;
if (index < res)
	index = res;
j = min;
while (j <= index && array[j] <= value)
{
printf("Value checked array[%lu] = [%d]\n", j, array[j]);
if (array[j] == value)
	return (j);
j++;
}
return (-1);
}
