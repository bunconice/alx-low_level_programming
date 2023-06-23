#include <stdio.h>
#include "main.h"

/**
 * print_line - draws a straight line
 * @n: inputted argment
 * return: always 0
 */
void print_line(int n)
{
	int i = n;

	for (i = n; i > 0; i--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
