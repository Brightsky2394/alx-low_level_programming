#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to be searched
 * @accept: The prefix to be measured
 * Return: new string
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;
for (j = 0; *(s + j); j++)
{
for (i = 0; *(accept + i); i++)
{
if (*(s + j) == *(accept + i))
break;
}
if (*(accept + i) == '\0')
break;
}
return (j);
}
