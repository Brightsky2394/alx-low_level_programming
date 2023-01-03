#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest: The destination value
 * @src: The source value
 * @n: The copy limit
 * Return: char value
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
while (src[i++])
	j++;
for (i = 0; src[i] && i < n; i++)
	dest[i] = src[i];
for (i = j; j < n; i++)
	dest[index] = '\0';
return (dest);
}
