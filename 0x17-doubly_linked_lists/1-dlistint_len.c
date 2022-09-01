#include "lists.h"
/**
 * dlistint_len - Function
 *
 * Description: gets number of elements in a linked doubly list
 *
 * @h: pointer parameter of type dlistint, head
 *
 * Return: returns number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	if (!h)
		return (0);
	while (h)
	{
		length++;
		h = h->next;
	}
	return (length);
}
