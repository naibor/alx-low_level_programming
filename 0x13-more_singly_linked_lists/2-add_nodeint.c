#include "lists.h"
/**
 * add_nodeint - Function
 *
 * Descrition: adds a new node at the beginning of a listint_t list.
 *
 * @head: pointer to pointer of type listint_t
 * @n: constannt parameter of type int
 *
 * Return: returns address to new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	/*allocate memory anch check if null*/
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	/*assign new values*/
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
