#include "lists.h"
/**
 *pop_listint - deletes the head node and returns its data
 *@head: head pointer to head 
 *Return: fjn
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *tdel;

	if (*head == NULL)
		return (0);
	else
	{
		tdel = (*head);
		tdel = (*head)->next;
		free(tdel);
	}
	return (0);
}
		
