#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning of a dlistint_t list
 * @head: pointer to a list
 * @n: element to add in th node
 * Return: the address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *tail;

	new = malloc(sizeof(dlistint_t));
	if (new != NULL)
	{
		new->next = tail = *head;
		new->n = n;
		new->prev = NULL;
	}
	else
		return (NULL);

	if (*head != NULL)
		(*head)->prev = new;

	*head = new;

	return (new);
}
