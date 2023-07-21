#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - iterates through an array
 * @array: array of numbers
 * @size: size of the array
 * @action: prints elements of the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	
	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
