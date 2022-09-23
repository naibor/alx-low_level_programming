#include "hash_tables.h"
/**
 * hash_table_delete - Function
 *
 * Description: deletes a hash table
 *
 * @ht: the hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x = 0;
	hash_node_t *next_node = NULL, *temp_node = NULL;

	if (!ht)
		return;

	if (ht->array)
	{
		for (; x < ht->size; x++)
		{
			if (ht->array[x])
			{
				temp_node = ht->array[x];
				while (temp_node)
				{
					next_node = temp_node->next;
					if (temp_node->value)
						free(temp_node->value);
					if (temp_node->key)
						free(temp_node->key);
					free(temp_node);
					temp_node = next_node;
				}
			}
		}
		free(ht->array);
	}
	free(ht);
}
