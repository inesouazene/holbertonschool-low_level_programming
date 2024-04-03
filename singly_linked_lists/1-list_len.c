#include "lists.h"

/**
* list_len - length of list_t struct
*
* @h: head node
*
* Return: number of elements in a linked list_t list
*/
size_t list_len(const list_t *h)
{
	int elements_count = 0;

	while (h != NULL)
	{
		elements_count++;
		h = h->next;
	}

	return (elements_count);
}
