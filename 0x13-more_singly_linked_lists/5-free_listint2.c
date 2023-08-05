#include "lists.h"

/**
 * free_listint2 - This a free  linked list
 * @head: The listint_t list pointer to be free
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
