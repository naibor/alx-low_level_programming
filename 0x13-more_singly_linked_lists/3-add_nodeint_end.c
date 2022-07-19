#include "lists.h"
/**
 * add_nodeint_end - Function
 *
 * Description: adds a new node at the end of a listint_t list
 *
 * @head: pointer to pointer of type listint_t
 * @n: constant parameter of type int
 *
 * Return: returns address to new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	/*allocate memory and check it null*/
	new =  malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	temp = *head;
	if (temp == NULL)
		*head = new;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (new);


}
