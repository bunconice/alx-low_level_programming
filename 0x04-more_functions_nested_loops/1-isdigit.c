#include <stdio.h>
#include "main.h"

/**
 * _isdigit - function that checks for a digit
 * @c: inputted argument
 * Return: 1 if true, 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	return (0);
}
