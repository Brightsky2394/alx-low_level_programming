#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: string to code
 * Return: The encoded string
 */
char *leet(char *s)
{
int a = 0,
int b = 0,
int m = 5;
char g[5] = {'A', 'E', 'O', 'T', 'L'};
char f[5] = {'4', '3', '0', '7', '1'};
while (s[a])
{
b = 0;
while (b < m)
{
if (s[a] == g[b] || s[a] - 32 == g[b])
{
s[a] = n[b];
}
b++;
}
a++;
}
return (s);
}
