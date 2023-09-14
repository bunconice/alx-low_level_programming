#include"lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the end of a list
 * @head: pointer to a list
 * @n: data for the new node
 * Return: the address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tail = *head;

	new = malloc(sizeof(dlistint_t));
	if (new != NULL)
	{
		if (*head == NULL)
		{
			new->n = n;
			new->next = NULL;
			new->prev = NULL;
			*head = new;
		}
		else
		{
			while (tail->next != NULL)
				tail = tail->next;
			tail->next = new;
			new->n = n;
			new->prev = tail;
			new->next = NULL;
		}
	}
	else
		return (NULL);

	return (new);
}
