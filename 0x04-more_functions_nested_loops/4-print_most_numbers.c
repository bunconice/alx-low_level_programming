#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints number 0-9
 * but jumps 2 and 4
 * return: 0-9 with 4 and 2
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		_putchar(i + '0');
	}
	_putchar('\n');
}
