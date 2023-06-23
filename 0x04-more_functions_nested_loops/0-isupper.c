#include <stdio.h>
#include <ctype.h>

#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: input argument
 * Return: 1 if true, 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
