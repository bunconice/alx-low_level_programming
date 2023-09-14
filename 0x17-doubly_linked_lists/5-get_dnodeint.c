#include"lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node
 * @head: head of the node
 * @index: the index of the node, starting from 0
 * Return: nth node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}
	if (current == NULL)
		return (NULL);
	return (current);
}
