#include "lists.h"
/**
 * add_nodeint - prints the elements os a list
 * @head: pointer to a list
 * @n: the number of new nodes to be added
 * Return: address of newnode
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode != NULL)
	{
		newnode->n = n;
		newnode->next = *head;
		*head = newnode;
	}
	else
		return (NULL);
	return (newnode);
}
