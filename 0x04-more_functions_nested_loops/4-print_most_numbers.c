#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints number 0-9
 * but jumps 2 and 4
 * return: 0-9 with 4 and 2
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2)
		{
			continue;
		}
		if (i == 4)
		{
			continue;
		}
		putchar(i + '0');
	}
	putchar('\n');
}
