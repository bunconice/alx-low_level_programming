#include"lists.h"
/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: head pointer to the list
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head->next != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
