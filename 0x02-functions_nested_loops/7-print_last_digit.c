#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - Print last digit of a number
 *
 * @i: parameter of a type integer
 *
 * Return: Returns the last digit of i
 */

int print_last_digit(int i)
{
	i = i % 10;
	if (i < 0)
	{
		i = abs(i);
	}
	_putchar(i + '0');
	return (i);
}
