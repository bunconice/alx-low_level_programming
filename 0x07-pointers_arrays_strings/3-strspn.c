#include "main.h"
/**
 * _strspn - return length of string that matches value consistently
 *@s: string to search
 *@accept: the bytes to include.
 *Return: number of bytes consecutively matched
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j;
int c = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] != 32)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
	c++;
}
}
else
return (c);
}
return (c);
}
