#include "hash_tables.h"

/**
 * hash_table_get - gets a key's value
 * @ht: table
 * @key: key to find value
 * 
 * Return: the key's value or null if can't be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || strlen(key) == 0)
			return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
				return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}