#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of a list_t list
 * @h: list to print
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t counter;
	while (h != NULL)
	{
		printf(" %d ", h->data);
		h = h->next;
		counter++;
	}
return (counter);
}
