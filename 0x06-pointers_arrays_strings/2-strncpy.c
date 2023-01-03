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
int len1 = 0;
int len2 = 0;
int i;
while (src[len1] != '\0')
	len1++;
while (dest[len2] != '\0')
	len2++;
for (i = 0; i < n && src[i] != '\0'; i++)
	dest[i] = src[i];
for (; i < n; i++)
	dest[i] = '\0';
return (dest);
}
