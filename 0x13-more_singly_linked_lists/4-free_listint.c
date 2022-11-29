#include "lists.h"
/**
 *free_listint - frees listint
 *Return: nothing
 *@head: head pointer
 *
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
