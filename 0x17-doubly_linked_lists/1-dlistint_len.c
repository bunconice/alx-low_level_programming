#include "lists.h"
/**
 * dlistint_len - function that return the number of element in a linked list
 * @h: pointer to a list
 * Return: number of elements in the list
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t n_elements = 0;

	while (h != 0)
	{
		n_elements++;
		h = h->next;
	}

	return (n_elements);
}
