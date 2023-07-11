#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: Index where value is located or -1
 */

int binary_search(int *array, size_t size, int value)
{
int lft, mid, j;
size_t ryt;
ryt = size - 1;
lft = 0;
while (lft <= ryt)
{
printf("Search in array: ");
for (j = lft; j <= ryt; j++)
{
(j < ryt) ? printf("%d, ", array[j]) : printf("%d\n", array[j]);
}
mid = (lft + ryt) / 2;
if (array[mid] == value)
	return (mid);
else if (value < array[mid])
	ryt = mid - 1;
else
	lft = mid + 1;
}
return (-1);
}
