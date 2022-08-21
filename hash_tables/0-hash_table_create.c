#include"hash_tables.h"
/**
 * hash_table_create - Creates a new Hash Table.
 * @size: Size of the array.
 * Return: A pointer to the newly created hash table, NULL if its fail.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash;

	new_hash = malloc(sizeof(hash_table_t));
	if (!new_hash)
		return (NULL);

	new_hash->size = size;
	new_hash->array = malloc(sizeof(hash_node_t *) * size);

	if (!new_hash->array)
	{
		return (NULL);
	}
	return (new_hash);
}
