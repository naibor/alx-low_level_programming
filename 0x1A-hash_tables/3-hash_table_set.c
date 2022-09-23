#include "hash_tables.h"
/**
 * hash_table_set - Function
 *
 * Description: Adds an element to a hash table
 *
 * @ht: the hash table where the element is added
 * @key: the key
 * @value: the partner to key
 *
 * Return: returns 1 if success and 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *key_copy = NULL, *value_copy = NULL;
	unsigned long int index = 0;
	hash_node_t *new_node = NULL, *temp_node = NULL;

	/* check presence*/
	if (!ht || !key || !value)
		return (0);
	else if (strlen(key) == 0)
		return (0);

	/*allocate memory and check it*/
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	/* allocate values*/
	key_copy = strdup(key);
	value_copy = strdup(value);

	new_node->key = key_copy;
	new_node->value = value_copy;
	new_node->next = NULL;

	/* generate index using key_index function*/
	index = key_index((unsigned char *) key, ht->size);
	/*check if index is there and  handle collusion*/
	if ((ht->array)[index] != NULL)
	{
		temp_node = (ht->array)[index];
		while (temp_node)
		{
			if (strcmp(temp_node->key, key_copy) == 0)
			{
				free(ht->array[index]->value);
				ht->array[index]->value = value_copy;
				free(key_copy);
				free(new_node);
				return (1);
			}
			temp_node = temp_node->next;
		}
		temp_node = (ht->array)[index];
		new_node->next = temp_node;
		(ht->array)[index] = new_node;
	}
	/* if no conflict*/
	else
		(ht->array)[index] = new_node;
	return (1);
}
