#include "lists.h"

/**
* _strlen - function that returns the length of a string
* @s: string to get length
* Return: length of the string
*/

int _strlen(const char *s)
{
	int num_char;

	for (num_char = 0; s[num_char] != '\0'; num_char++)
	{
	}
	return (num_char);
}

/**
* add_node_end - function that adds a new node at the end of a list_t list
* @head: Pointer to a pointer to the head of the list
* @str: String value to be stored in the new node
*
* Return: Pointer to the newly added node or NULL if memory allocation fails
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last_node;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
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
