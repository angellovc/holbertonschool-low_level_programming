#include "hash_tables.h"
/**
 * hash_table_set - set a key into a hash table
 *@ht: hash table
 *@key: key
 *@value: key value
 * Return: 1 in success, 0 in failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *ht_node;

	if (key == '\0' || strlen(key) == 0 || value == 0 || ht == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	ht_node = ht->array[index];
	if (ht_node != '\0')
		if (strcmp(ht_node->key, key) == 0)
		{
			if (strcmp(ht_node->value, value) == 0)
				return (0);
			free(ht_node->value);
			ht_node->value = strdup(value);
			return (1);
		}
	ht_node = new_hash_node(key, value);
	if (ht_node == '\0')
		return (0);
	if (add_in_array(ht, ht_node, index) == 1)
		return (1);
	add_in_node(ht, ht_node, index);
	return (1);
}
/**
 *new_hash_node - make a new node
 *@key: key
 *@value: key value
 *Return: new node
 */
hash_node_t *new_hash_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == '\0')
		return ('\0');
	node->key = strdup(key);
	if (node->key == NULL)
		return (NULL);
	node->value = strdup(value);
	if (node->value == NULL)
		return (NULL);
	node->next = '\0';
	return (node);
}
/**
 * add_in_array - add hash node into array
 * @ht: hash table
 * @node: hash node
 * @index: index
 * Return: 1 in success, 0 in failure
 */
int add_in_array(hash_table_t *ht, hash_node_t *node, unsigned long int index)
{
	if (ht->array[index] != '\0')
		return (0);

	ht->array[index] = node;
	return (1);
}
/**
 *add_in_node - add in node to avoid colitions
 *@ht: hash table
 *@node: hash table node
 *@index: index
 */
void add_in_node(hash_table_t *ht, hash_node_t *node, unsigned long int index)
{
	hash_node_t *ht_node;

	ht_node = ht->array[index];
	node->next = ht_node;
	ht->array[index] = node;
}
