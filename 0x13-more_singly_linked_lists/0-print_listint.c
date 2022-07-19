#include "lists.h"
/**
 * print_listint - Function
 *
 * Descrition: prints all the elements of a listint_t list.
 *
 * @h: pointer parameter of type listint_t
 *
 * Return: returns number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
