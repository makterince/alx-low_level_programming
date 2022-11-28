#include "lists.h"
/**
 *add_nodeint - adds a node at the start of a linked list
 *@n: parameter
 *Return: temp oor null
 *@head: parameter
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	else
	{
		temp->n = n;
		temp->next = *head;
	}
	*head = temp;
	return (temp);
}
