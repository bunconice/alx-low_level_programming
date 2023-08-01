#include "lists.h"
/**
 * get_nodeint_at_index - locate the nth node of a list
 * @head: pointer to a list
 * @index: nth node of the list
 * Return: nth node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;
	unsigned int len = 0;

	if (head != NULL)
	{
		temp = head;
		while (temp != 0)
		{
			len++;
			temp = temp->next;
		}
	}

	if (index > len)
		return (NULL);

	temp = head;
	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
