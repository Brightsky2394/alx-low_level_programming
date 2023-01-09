#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *  which contains a copy of the string given as a parameter.
 *  @str: string to duplicate
 *  Return: the string duplicated
 */
char *_strdup(char *str)
{
char *r;
int l, i;
if (str == NULL)
	return (0);
l = 0;
while (*(str + l))
	l++;
r = malloc(sizeof(char) * l + 1);
if (r == 0)
	return (0);
for (i = 0; i <= l; i++)
{
r[i] = str[i];
}
return (r);
}
