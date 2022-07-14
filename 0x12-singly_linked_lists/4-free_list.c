#include"lists.h"
/**
 * free_list - Function
 *
 * Descriprion: frees a list_t list.
 *
 * @head: pointer of type list_t
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
