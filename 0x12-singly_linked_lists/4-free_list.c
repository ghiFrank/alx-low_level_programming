#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees a list
 * @head: head of the linked list
 */
void free_list(list_t *head)
{
	list_t *current_n;

	while ((current_n = head) != NULL)
	{
		head = head->next;
		free(current_n->str);
		free(current_n);
	}
}
