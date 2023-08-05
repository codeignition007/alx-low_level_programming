#include "lists.h"

/**
 * print_listint - All elements of a linked list are print
 * @h: A type listint_t of a linked list to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
