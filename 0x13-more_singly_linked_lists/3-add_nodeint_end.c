#include "lists.h"
/**
 * add_nodeint_end - add new node at the end of a list
 * @head: pointer to a list
 * @n: integer to be stored in the list
 * Return: address of newnode
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	temp = *head;
	newnode = malloc(sizeof(listint_t));
	if (newnode != NULL)
	{
		newnode->n = n;
		newnode->next = NULL;
	}
	else
		return (NULL);
	if (temp != 0)
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}
	else
		*head = newnode;
	return (newnode);
}
