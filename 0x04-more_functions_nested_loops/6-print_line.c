#include <stdio.h>
#include "main.h"

/**
 * print_line - draws a straight line
 * @n: inputted argment
 * return: always 0
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	return (0);
}
