#include "search_algos.h"
/**
 * print_array - Prints an array between two boundaries
 * @array: pointer to the first element of the array to print
 * @lft: left boundary
 * @ryt: right boundary
 * Return: No Return
 */
void print_array(int *array, int lft, int ryt)
{
int i = lft;
while (i < ryt)
{
printf("%d, ", array[i]);
i++;
}
printf("%d\n", array[i]);
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: array to the first element of array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located or -1 otherwise
 */

int binary_search(int *array, size_t size, int value)
{
int lft, ryt, mid;
if (array == NULL)
	return (-1);
ryt = size - 1;
lft = 0;
while (lft <= ryt)
{
printf("Searching in array: ");
print_array(array, lft, ryt);
mid = (lft + ryt) / 2;
if (array[mid] == value)
	return (mid);
else if (array[mid] < value)
	lft = mid + 1;
else
	ryt = mid - 1;
}
return (-1);
}
