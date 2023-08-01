#include "lists.h"

/**
 * print_listint - prints the elements os a list
 * @h: pointer to a list
 * Return: the number of nodes in the list
*/
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;
	const listint_t *ptr;
	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		nodes++;
		ptr = ptr->next;
	}
	return (nodes);
}
