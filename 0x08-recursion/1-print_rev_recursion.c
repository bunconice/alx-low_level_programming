#include "main.h"
/**
 * _print_rev_recursion - print a springs in reverse order
 * @s: pointer space of memory to fill
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
