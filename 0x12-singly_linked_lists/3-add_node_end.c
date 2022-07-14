#include "lists.h"
/**
 * add_node_end - Function
 *
 * Description: adds a new node at the end of a list_t list.
 *
 * @head: pointer to a pointer of type list_t
 * @str: constant pointer of type char
 *
 * Return: returns address to new element and NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dup_str;
	int count;
	list_t *new_node, *temp;

	/*allocate space in memory and check if empty*/
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	/*calculate length of str*/
	while (*str)
	{
		count++;
		str++;
	}
	/*assign values*/
	new_node->len = count;
	new_node->str = dup_str;
	temp = *head;
	if (temp == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
