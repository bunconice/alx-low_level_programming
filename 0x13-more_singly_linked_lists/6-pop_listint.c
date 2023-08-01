#include "lists.h"
/**
 * pop_listint - frees a list
 * @head: pointer to a list
 * Return: head node’s data (n)
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);
	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);

	return (data);
}
