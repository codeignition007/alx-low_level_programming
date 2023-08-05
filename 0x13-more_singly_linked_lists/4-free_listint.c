#include "lists.h"

/**
 * free_listint - A linked list is free
 * @head: Free listint_t list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
