#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: value key
 * Return:  value associated with a key or NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int idx;
hash_node_t *tm;

if (ht == NULL || ht->array == NULL || ht->size == 0 ||
key == NULL || strlen(key) == 0)
return (NULL);

idx = key_index((const unsigned char *)key, ht->size);
tm = ht->array[idx];
while (tm != NULL)
{
if (strcmp(tm->key, key) == 0)
return (tm->value);
tm = tm->next;
}
return (NULL);
}
