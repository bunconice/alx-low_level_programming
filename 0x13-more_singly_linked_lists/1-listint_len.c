#include "lists.h"

/**
 * listint_len - prints the elements os a list
 * @h: pointer to a list
 * Return: the number of nodes in the list
*/
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;
	const listint_t *ptr;
	ptr = h;
	while (ptr != NULL)
	{
		nodes++;
		ptr = ptr->next;
	}
	return (nodes);
}
