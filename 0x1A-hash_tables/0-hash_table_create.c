#include "hash_tables.h"
/**
 * hash_table_create - Function
 *
 * Description: It creates a hash table
 *
 * @size: unsigned long int, the size of the array
 *
 * Return: returns a pointer to the  hash_table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table = NULL;
	unsigned long int i;

	/* allocate memeory to new hash table and check it */
	new_hash_table = malloc(sizeof(hash_table_t));
	if (!new_hash_table)
		return (NULL);
	/* assign the size*/
	new_hash_table->size = size;
	/* allocate memory to array in hash_table and check it*/
	new_hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!new_hash_table->array)
	{
		free(new_hash_table);
		return (NULL);
	}
	/* populate new_hash_table array with NULL values*/
	for (i = 0; i < size; i++)
		(new_hash_table->array)[i] = NULL;
	return (new_hash_table);
}
