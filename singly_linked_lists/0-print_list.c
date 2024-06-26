#include "lists.h"

/**
* print_list - prints a list
*
* @h: head of list
*
* Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	int nodes_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodes_count++;
	}
	return (nodes_count);
}
