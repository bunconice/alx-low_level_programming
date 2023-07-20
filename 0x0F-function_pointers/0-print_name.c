#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints name
 * @name: first parameter
 * @(*f): second parameter
 * */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
