#include "lists.h"

/*
* add_node - Adds a new node at the beginning of a list_t list
*
* @head: Pointer to a pointer to the head of the list
* @str: String value to be stored in the new node
*
* Return: Pointer to the newly added node or NULL if memory allocation fails
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int length = 0;

	while (str[length])
	{
		length++;
	}

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = length;
	new->next = (*head);

	(*head) = new;

	return (new);
}
