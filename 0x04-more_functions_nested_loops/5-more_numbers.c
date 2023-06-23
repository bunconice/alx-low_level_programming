#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: 0 Always
 */
void more_numbers(void)
{
	int tenTimes;
	int number;

	for (tenTimes = 0; tenTimes < 10; tenTimes++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number > 9)
			{
				_putchar(number / 10 + '0');
				_putchar(number % 10 + '0');
			}
			else
			{
				_putchar(number + '0');
			}
		}
		_putchar('\n');
	}
}
