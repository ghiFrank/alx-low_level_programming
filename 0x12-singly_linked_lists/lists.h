#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct list_s - linked list
 * @str: string
 * @len: length
 * @next: pointer to next node
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
size_t print_list(const list_t *h);
#endif
