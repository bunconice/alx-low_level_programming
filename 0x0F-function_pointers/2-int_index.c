#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search
 * @size: size of array
 * @cmp: pointer to fucntion used for comparing
 *
 * Return: returns the index of the first element for
 * cmp not 0, and -1 when no element match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size)
	{
		for (i = 0; i < size; i++)
		{
		if (cmp(array[i])!= 0)
			return (i);
		}
	}
	return (-1);
}
