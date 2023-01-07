#include "main.h"
/**
 * _strchr - locate character in string
 * @s: string
 * @c: character to find
 * Return: the string from character found
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
++s;
}
if (*s == c)
{
return (s);
}
return (0);
}

