#include "main.h"
/**
 * leet - encodes a string into 1337
 * @r: string to code
 * Return: The encoded string
 */
char *leet(char *r)
{
char arr[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
char rep[] = {'4', '3', '0', '7', '1'};
int i;
int j;
for (i = 0; r[i] != '\0'; i++)
{
for (j = 0; arr[j] != '\0'; j++)
{
if (r[i] == arr[j])
	r[i] = replace[j / 2];
}
}
return (r);
}

