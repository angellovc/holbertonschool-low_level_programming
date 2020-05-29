#include "hash_tables.h"
/**
 * key_index - get the hash table number where key will be stored
 *@key: key
 *@size: size of hash table
 * Return: return hash number to store key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return ((hash_djb2(key)) % size);
}
