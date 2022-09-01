#include "lists.h"
/**
 * print_dlistint- Function
 *
 * Description: prints all elements of a doubly linked list
 *
 * @h: pointer parameter, the head of linked list
 *
 * Return: returns the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp;

	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
