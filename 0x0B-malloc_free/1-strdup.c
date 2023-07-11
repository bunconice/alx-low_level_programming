#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to duplicate
 * Return: pointer to duplicated string in allocated memory
 */

char *_strdup(char *str)
{
	char *new_str;
	size_t len = 0;

	while (str[len] != '\0')
		len++;

	if (str == NULL)
		return (NULL);

	new_str = (char *)malloc((len + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);

	for (int i = 0; i < len; i++)
	{
		*(new_str + 1) = *(char + 1);
	}
	return (new_str);

	free(new_str);
}
