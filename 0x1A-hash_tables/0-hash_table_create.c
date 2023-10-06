#include "hash_tables.h"
/**
 * hash_table_creat -  creates a hash table.
 * @size: array size.
 * Return: pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int x;

	hash_table = malloc(sizeof(hash_table_t));
if (hash_table == NULL)
	return (NULL);
hash_table->size = size;
hash_table->array = malloc(size * sizeof(hash_table_t *));
if (hash_table->array == NULL)
{
	free(hash_table);
	return (NULL);
}
for (x = 0; x < size; x++)
hash_table->array[x] = NULL;
return (hash_table);
}
