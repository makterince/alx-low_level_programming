#include "lists.h"
/**
 *free_list - frees list t
 *@head: parameter
 *Return: 0
 *
 */
void free_list(list_t *head)
{
	struct list_t = temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
