#include "hash_tables.h"
/**
 *free_list - release a linked list
 *@head: linked list
 */
void free_list(hash_node_t *head)
{
	hash_node_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->key);
		free(head->value);
		free(head);
		head = tmp;
	}
}
/**
 * hash_table_delete - release the memory allocate by hash table
 *@ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;

	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
			free_list(ht->array[i]);
		i++;
	}
	free(ht->array);
	free(ht);
}
