#include "lists.h"

/**
* sum_dlistint - function that returns the sum of
* all the data (n) of a dlistint_t linked list.
*
* @head: pointer to the head of the list
*
* Return: sum of all the data, or 0 if list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	const dlistint_t *tmp;
	int sum = 0;

	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
