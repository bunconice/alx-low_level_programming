#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - initialize a variable of type struct
 * @d: variable of type struct
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("name: (nil)");
	else if (d->owner == NULL)
		printf("owner: (nil)");
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
