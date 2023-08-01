#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: pointer to a list
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	head = NULL;
}
