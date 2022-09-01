#include "lists.h"
/**
 * add_dnodeint - Function
 *
 * Description: adds a new node at the start of a d-list
 *
 * @head: pointer to a pointer parameter
 * @n: int value to add
 *
 * Return: returns addredd of new element or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (!head)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n;

	new_node->next = *head;
	new_node->prev = NULL;

	if (*head)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
