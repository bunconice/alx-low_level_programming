#include "main.h"

/**
 * main - Entry point, print alphabet in lower case followed by a new line
 * print alphabet: prints alphabet in lower case followed by a new line
 * Return: 0 (success)
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
