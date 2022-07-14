#include "lists.h"
/**
 * print_list - Function
 *
 * Description: prints all the elements of a list_t list
 *
 * @h: constant pointer parameter of type list_t
 *
 * Return: returns number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		/*increments length count*/
		count++;
		h = h->next;
	}
	return (count);
}
