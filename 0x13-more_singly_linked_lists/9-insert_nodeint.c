#include "lists.h"
/**
 * insert_nodeint_at_index - insert  new node at a given index
 * @head: pointer to a list
 * @idx: index where new node is to be added
 * @n: integer n
 * Return: address of newnode
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *newnode;
	unsigned int i = 0;
	unsigned int len = 0;

	if (*head != NULL)
	{
		temp = *head;
		while (temp != 0)
		{
			len++;
			temp = temp->next;
		}
	}

	if (idx > len)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	temp = *head;
	while (i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	newnode->next = temp->next;
	temp->next = newnode;
	return (newnode);
}
