#include "hash_tables.h"
/**
 * hash_table_print - Function
 * Description: prints a hash table
 *
 * @ht: the hash table to print
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x = 0, last = 0;
	hash_node_t *temp_node = NULL;

	/*check if ht is NULL*/
	if (ht == NULL)
		return;
	printf("{");
	if (ht)
	{
		for (; x < ht->size - 1; x++)
		{
			if (ht->array[x] != NULL)
				last = x;
		}
		for (x = 0; x <= last; x++)
		{
			temp_node = ht->array[x];
			while (temp_node)
			{
				printf("'%s': '%s'", temp_node->key, temp_node->value);
				temp_node = temp_node->next;
				if (x < last - 1)
					printf(", ");
			}
		}
	}
	printf("}\n");
}
