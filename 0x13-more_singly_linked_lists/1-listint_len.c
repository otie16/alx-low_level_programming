#include "lists.h"

/**
 * listint_len - counts the number of nodes in a linked list
 * @h: head of the list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	
	size_t count = 0;

	while (h)
	{
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}
