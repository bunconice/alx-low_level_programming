#include"lists.h"
/**
 * sum_dlistint - function returns the sum of all the data of a linked list
 * @head: head of the node
 * Return: 0, if the list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (head != NULL)
	{
		while (temp != NULL)
		{
			sum += temp->n;
			temp = temp->next;
		}
	}
	else
		return (0);

	return (sum);
}
