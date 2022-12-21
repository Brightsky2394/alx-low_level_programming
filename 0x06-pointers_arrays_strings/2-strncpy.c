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
int a;
int b;
while (src[b])
{
b++;
}
while (a < n && src[a])
{
dest[a] = src[a];
}
while (a < n)
{
dest[a] = '\0';
a++;
}
return (dest);
}
