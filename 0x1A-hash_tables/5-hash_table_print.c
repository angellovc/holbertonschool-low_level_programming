#include "hash_tables.h"
/**
 *print_hash_node - print nodes of the hasth table
 *@node: node
 *
 */
void print_hash_node(hash_node_t *node)
{
	while (node != '\0')
	{
		printf("'%s': ", node->key);
		printf("'%s'", node->value);
		node = node->next;
	}

}
/**
 *hash_table_print - print the entire elements into a hash table
 *@ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int up = 0;

	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			if (up == 1)
				printf(", ");
			print_hash_node(ht->array[i]);
			up = 1;
		}
		i++;
	}
	printf("}\n");
}
