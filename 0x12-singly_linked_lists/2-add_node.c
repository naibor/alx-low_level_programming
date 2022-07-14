#include "lists.h"
/**
 * add_node - Function
 *
 * Description: adds a new node at the beginning of a list_t list
 *
 * @head: pointer to pointer of type list_t
 * @str: constant pointer of type char
 *
 * Return: returns address of new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup_str;
	list_t *new_node;
	int count = 0;

	/*allocate memory to new node and check if null*/
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	/*calculate length of string*/
	while(*str)
	{
		count++;
		str++;
	}

	new_node->str = dup_str;
	new_node->len = count;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
