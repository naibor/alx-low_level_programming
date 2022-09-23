#include "hash_tables.h"
/**
 * key_index - Function
 * Description: it gives you the index of a key
 *
 * @key: pointer constant of type unsigned char, the key
 * @size: unsigned long int, the size array
 *
 * Return: returns the index of key/value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	/* check if array is empty*/
	if (size == 0)
		return (0);
	/* get the hash using djb2 function*/
	hash = hash_djb2(key);
	/* modulo of hash and size of array gives index*/
	return (hash % size);
}
