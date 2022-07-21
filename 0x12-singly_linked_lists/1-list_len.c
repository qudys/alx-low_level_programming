#include "lists.h"
#include <stdio.h>
/**
 * list_len - gets the length of a linked list
 * @h: pointer to the head of the list
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
