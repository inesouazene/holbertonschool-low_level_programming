#include "lists.h"

/**
* dlistint_len - function that returns the number
* of elements in a linked dlistint_t list.
*
* @h: head of list
*
* Return: number of elements in a linked list_t list
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp;
	int elements_count = 0;

	tmp = h;

	while (tmp != NULL)
	{
		elements_count++;
		tmp = tmp->next;
	}

	return (elements_count);
}
