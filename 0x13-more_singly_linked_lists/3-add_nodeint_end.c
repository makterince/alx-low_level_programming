#include "lists.h"
/**
 *add_nodeint_end - adds a node at the end
 *@n: parameter
 *Return: temp address or null
 *@head: head pointer for first member of link
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *end;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
		*head = temp;
	else
	{
		end = *head;
		while (end->next != NULL)
		{
			end = end->next;
		}
		end->next = temp;
	}
	return (*head);
}
