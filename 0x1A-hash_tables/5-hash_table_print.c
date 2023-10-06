#include "hash_tables.h"
/**
 * hash_table_print -  prints a hash table
 * @ht: hash table.
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int x;
hash_node_t *tm;
char flag = 0;

if (ht == NULL || ht->array == NULL)
return;
printf("{");

for (x = 0; x < ht->size; x++)
{
tm = ht->array[x];
while (tm != NULL)
{
if (flag == 1)
printf(", ");
printf("'%s': '%s'", tm->key, tm->value);
flag = 1;
tm = tm->next;
}
}
printf("\n");
}
