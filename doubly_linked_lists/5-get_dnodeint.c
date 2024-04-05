#include "lists.h"

/**
* get_dnodeint_at_index - function that returns the nth node
* of a dlistint_t linked list.
* @head: pointer to the head of the list
* @index: index of the node, starting from 0
* Return: pointer to nth node, or NULL if the node doesn't exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int actual_index = 0;

	tmp = head;

	if (head == NULL)
		return (NULL);

	while (tmp != NULL && actual_index != index)
	{
		actual_index++;
		tmp = tmp->next;
	}
	if (index == actual_index)
		return (tmp);
	else
		return (NULL);
}
