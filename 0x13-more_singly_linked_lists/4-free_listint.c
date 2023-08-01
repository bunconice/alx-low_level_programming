#include "lists.h"
/**
 * free_listint - frees a list
 * @head: pointer to a list
*/
void free_listint(listint_t *head)
{
	free(head);
}
