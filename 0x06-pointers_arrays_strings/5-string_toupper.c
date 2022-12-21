#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @c: The string will be modified
 * Return: char var
 */
char *string_toupper(char *c)
{
int m;
m = 0;
while (c[m] != '\0')
{
if (c[m] >= 'a' && c[m] <= 'z')
c[m] -= 32;
m++;
}
return (c);
}
