#include "main.h"
/**
 * _strstr - Locates a substring
 * @haystack: The string to be searched
 * @needle: The substring to be located
 * Return: return 0
 */
char *_strstr(char *haystack, char *needle)
{
char *str1;
char *str2;
while (*haystack != '\0')
{
str1 = haystack;
str2 = needle;
while (*haystack != '\0' && *str2 != '\0' && *haystack == *str2)
{
haystack++;
str2++;
}
if (*str2 == '\0')
{
return (str1);
}
haystack = str1 + 1;
}
return (0);
}
