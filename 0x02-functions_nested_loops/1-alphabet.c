#include "main.h"

/**
 * print_alphabet - print alohabet in lower case followed by a new line
 *
 * Return: 0 (success)
 */

int print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
