#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: The destination value
 * @src: The source value
 * @n: The limit of the concatenation
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int index = strlen(dest);
int a = 0;
while (a < n && *src)
{
dest[index + a] = *src;
src++;
a++;
}
dest[index + a] = '\0';
return (dest);
}
