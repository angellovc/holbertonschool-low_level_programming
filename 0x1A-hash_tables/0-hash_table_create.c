#include "hash_tables.h"
/**
 * hash_table_create - make a new hash table structure
 *@size: size of the new table
 * Return: null in failure or pointer to a new table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash;

	if (size < 1)
		return (NULL);

	new_hash = malloc(sizeof(hash_table_t));
	if (new_hash == '\0')
		return ('\0');
	new_hash->array = malloc(sizeof(hash_node_t *) * size);
	if (new_hash->array == '\0')
	{
		free(new_hash);
		return ('\0');
	}
	memset(new_hash->array, 0, size * sizeof(hash_node_t **));
	new_hash->size = size;
	return (new_hash);
}
