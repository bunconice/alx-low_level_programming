#include "lists.h"
/**
 * print_dlistint - prints all the elements of a list
 * @h: pointer to a list
 * Return: the number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != 0)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}

	return (nodes);
}
