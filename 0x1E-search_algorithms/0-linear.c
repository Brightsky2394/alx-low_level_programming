#include "search_algos.h"

/**
 * linear_search - searches for a value in an
 * array of integers using the linear search algorithm
 * @array: a pointer to the first element
 * of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: First index where value is located or -1
 */
int linear_search(int *array, size_t size, int value)
{
size_t num;
if (array == NULL)
	return (-1);
for (num = 0; num < size; num++)
{
printf("Value checked array[%lu] = [%d], num, array[num]");
if (array[num] == value)
	return (num);
}
return (-1);
}
