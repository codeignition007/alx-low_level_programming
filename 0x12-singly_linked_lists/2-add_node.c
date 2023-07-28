#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - A new node is added at the start of linked list
 * @head: Shows double pointer to list_t
 * @str: This adds a new string to the node
 *
 * Return: address of the new element, or displays NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
