#include "hash_tables.h"
/**
 * hash_table_get - Function
 *
 * Description: Retrieves a value associated with a key
 *
 * @ht: the hash_ table
 * @key: the key to look for
 *
 * Return: returns the value asscoiated with that key or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp_node = NULL;
	unsigned long int index;

	/* check presence of*/
	if (!ht || !key || !strcmp(key, ""))
		return (NULL);

	/* generate index using key_index*/
	index = key_index((const unsigned char *) key, ht->size);
	/* allocate values*/
	temp_node = (ht->array)[index];

	/*get the value we're assciated to the key*/
	while (temp_node)
	{
		if (!strcmp(temp_node->key, (char *)key))
			return (temp_node->value);
		temp_node = temp_node->next;
	}
	return (NULL);
}
