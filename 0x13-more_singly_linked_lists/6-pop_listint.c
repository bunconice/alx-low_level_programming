#include "lists.h"
/**
 * pop_listint - frees a list
 * @head: pointer to a list
 * Return: head node’s data (n)
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return (0);
	while (*head != 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
	return ((*head)->n);
}
