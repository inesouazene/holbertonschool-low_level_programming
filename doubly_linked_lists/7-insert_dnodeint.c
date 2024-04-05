#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a new node
 * at a given position.
 * @h: Pointer to a pointer to the head of the doubly linked list
 * @idx: index of the list where the new node should be added
 * @n: value of new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *tmp;
	unsigned int index = 1;

	new = NULL;
	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		tmp = *h;
		if (tmp != NULL)
			while (tmp->prev != NULL)
				tmp = tmp->prev;
		while (tmp != NULL)
		{
			if (index == idx)
			{
				if (tmp->next == NULL)
					new = add_dnodeint_end(h, n);
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new != NULL)
					{
						new->n = n;
						new->next = tmp->next;
						new->prev = tmp;
						tmp->next->prev = new;
						tmp->next = new;
					}
				}
				break;
			}
			tmp = tmp->next;
			index++;
		}
	}
	return (new);
}
