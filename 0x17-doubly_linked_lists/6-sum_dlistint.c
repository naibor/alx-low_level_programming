#include "lists.h"
/**
 * sum_dlistint - Function
 *
 * Description: sums all data in a d list
 *
 * @head: pointer parameter, the doubly linked list
 *
 * Return: returns 0 if empty, otherwise sum
 *
 */
int sum_dlistint(dlistint_t *head)
{
	int sum_of = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum_of += head->n;
		head = head->next;
	}
	return (sum_of);
}
