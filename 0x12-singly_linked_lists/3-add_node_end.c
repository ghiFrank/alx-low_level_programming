#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: the list
 * @str: string to duplicate
 * Return: returns the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_n, *current_n;
	size_t n;

	new_n = malloc(sizeof(list_t));
	if (new_n == NULL)
		return (NULL);
	new_n->str = strdup(str);
	for (n = 0; str[n]; n++)
		;
	new_n->len = n;
	new_n->next = NULL;
	current_n = *head;
	if (current_n == NULL)
		*head = new_n;
	else
	{
		while (current_n->next != NULL)
			current_n = current_n->next;
		current_n->next = new_n;
	}
	return (*head);
}
