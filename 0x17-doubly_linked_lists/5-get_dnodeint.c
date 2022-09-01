#include "lists.h"
/**
 * get_dnodeint_at_index - Function
 *
 * Description: get the nth node of a d list
 *
 * @head: pointer parameter the d list
 * @index: unsigned int the index to get
 *
 * Return: returns NULL if it doesn't exist and the node if it doesi
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x = 0;

	if (!head)
		return (NULL);

	while (head)
	{
		if (x++ == index)
			break;
		head = head->next;
	}
	return (head);
}
