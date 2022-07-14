#include "lists.h"
/**
 * list_len - Function
 *
 * Description: number of elements in a linked list_t list
 *
 * @h: constant pointer of type list_t
 *
 * Return: returns number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
