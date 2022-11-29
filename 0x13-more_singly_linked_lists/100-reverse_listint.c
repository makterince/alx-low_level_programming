#include "lists.h"
/**
 *reverse_listint - reverses a linked list
 *@head: head
 *Return: reversed list
 *
 *
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *irapada, *odechi;

	if (head == NULL)
		return (NULL);
	if (*head == NULL)
		return (NULL);

	odechi = NULL;
	while ((*head)->next != NULL)
	{
		irapada = (*head)->next;
		(*head)->next = odechi;
		odechi = *head;
		*head = irapada;
	}
	(*head)->next = odechi;
	return (*head);
}
