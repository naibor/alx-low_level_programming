#include "lists.h"
/**
 * free_dlistint - Function
 *
 * Description: free a doubly linked list
 *
 * @head: pointer parameter, the list
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
