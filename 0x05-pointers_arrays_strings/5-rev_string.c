#include "main.h"
/**
 * rev_string - reverses a string
 * @s: input
 * Return: string in reverse
 */
void rev_string(char *s)
{
char rs = s[0];
int j = 0;
int i;
while (s[j] != '\0')
	j++;
for (i = 0; i < j; i++)
{
j--;
rs = s[i];
s[i] = s[j];
s[j] = rs;
}
}
