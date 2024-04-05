#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at
 * index of a dlistint_t linked list.
 * @head: head of the list
 * @index: index of the new node
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int current_index = 0;

	if ((*head) == NULL)
		return (-1);
	if (index == 0)
	{
		if ((*head)->next != NULL)
		{
			free(*head);
			*head = (*head)->next;
			(*head)->prev = NULL;
			return (1);
		}
		free(*head);
		(*head) = NULL;
		return (1);
	}
	tmp = *head;
	while (tmp->next && current_index != index)
	{
		current_index++;
		tmp = tmp->next;
	}
	if (current_index == index)
	{
		if (tmp->next != NULL)
		{
			tmp->next->prev = tmp->prev;
			tmp->prev->next = tmp->next;
			free(tmp);
		}
		else
		{
			tmp->prev->next = NULL;
			free(tmp);
		}
		return (1);
	}
	return (-1);
}
