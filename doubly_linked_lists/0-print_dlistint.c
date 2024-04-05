#include "lists.h"

/**
* print_dlistint - function that prints all the elements of a dlistint_t list.
* @h: head of the list
*
* Return: number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp;
	int nodes_count = 0;

	tmp = h;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		nodes_count++;
	}
	return (nodes_count);
}
