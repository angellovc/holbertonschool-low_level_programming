#include "hash_tables.h"
/**
 * hash_table_get - get a value of a specific key
 * @ht: hash table
 * @key: key
 * Return: Value in success or Null in failure
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == '\0' || key == '\0' || strlen(key) == 0)
		return ('\0');
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	if (node == '\0')
		return ('\0');
	while (node != '\0')
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return ('\0');
}
