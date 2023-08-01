#include "lists.h"
/**
 * sum_listint - sum all the data of a list
 * @head: pointer to a list
 * Return: sum of data in the list
*/
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (head == 0)
		return (0);
	temp = head;
	while (temp != 0)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
