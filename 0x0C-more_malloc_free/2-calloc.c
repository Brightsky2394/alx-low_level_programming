#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of members
 * @size: size
 * Return: nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
int i = 0, j = 0;
char *s;
if (nmemb == 0 || size == 0)
	return (NULL);
j = nmemb * size;
s = malloc(j);
if (s == NULL)
	return (NULL);
while (i < j)
{
s[i] = 0;
i++;
}
return (s);
}
