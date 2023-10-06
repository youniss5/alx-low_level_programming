#include "hash_tables.h"
/**
 * make_hash_node - new hash node
 * @key: key node
 * @value: node value
 * Return: hash node or NULL
 */
hash_node_t *make_hash_node(const char *key, const char *value)
{
hash_node_t *node;

node = malloc(sizeof(hash_node_t));
if (node == NULL)
return (NULL);
node->key = strdup(key);

if (node->key == NULL)
{
free(node);
return (NULL);
}
node->value = strdup(value);
if (node->key == NULL)
{
free(node->key);
free(node);
return (NULL);
}
node->next = NULL;
return (node);
}

/**
 * hash_table_set - sets a key
 * @ht: hash table ( to add element to)
 * @key: data key
 * @value: the data we want to store
 * Return: 1 (success) 0 (otherwise)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int idx;
hash_node_t *hash_node, *tm;
char *new_value;

if (ht == NULL || ht->array == NULL || ht->size == 0 ||
key == NULL || strlen(key) == 0 || value == NULL)
return (0);
idx = key_index((const unsigned char *)key, ht->size);
tm = ht->array[idx];

while (tm != NULL)
{
if (strcmp(tm->key, key) == 0)
{
new_value = strdup(value);
if (new_value == NULL)
return (0);

free(tm->value);
tm->value = new_value;
return (1);
}
tm = tm->next;
}
hash_node = make_hash_node(key, value);
if (hash_node == NULL)
return (0);
hash_node->next = ht->array[idx];
ht->array[idx] = hash_node;
return (1);
}
