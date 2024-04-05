#include "lists.h"

/*
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: Pointer to a pointer to the head of the list
 * @str: String value to be stored in the new node
 *
 * Return: Pointer to the newly added node or NULL if memory allocation fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int index = 0;
	list_t *new, *last_node;

	while (str[index])
	{
		index++;
	}
	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = index;
	new->next = NULL;
	if (strdup(str) == NULL)
	{
		free(new);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new;
		return (new);
	}
}
