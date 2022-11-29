#include "lists.h"
/**
 *pop_listint - deletes the head node and returns its data
 *@head: head pointer to head 
 *Return: 0 if head node is empty or return data
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *tdel;
	int data;

	if (*head == NULL)
		return (0);
	else
	{
		tdel = (*head);
		data = (*head)->n;
		*head = (*head)->next;
		free(tdel);
	}
	return (data);
}
		
