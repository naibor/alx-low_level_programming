#include "lists.h"
/**
 * insert_nodeint_at_index - Function
 *
 * Description: inserts a new node at a given position.
 *
 * @head: pointer to pointer of type listint_t
 * @idx: unsigned int, index where new node will be added
 * @n: int parameter
 *
 * Return: returns address of new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *new_node;

	if (head == NULL)
		return (NULL);
	/*allocate memory to new node and check if empty*/
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	/*assign value to index*/
	while (head)
	{
		if (count == idx)
		{
			new_node->n = n;
			new_node->next = *head;
			return (new_node);
		}
		count++;
	}
	return (NULL);
}
