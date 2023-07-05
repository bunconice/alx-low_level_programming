#include "main.h"
/**
 * _strlen_recursion - return the length of a given string
 * @s: The string provided that its length need checking.
 * Return:function will return an integer that display
 * the length of strings provided.
 */
int _strlen_recursion(char *s)
{
if (*s != '\0')
return (1 + _strlen_recursion(s + 1));
return (0);
}
