#include "lists.h"
/**
 *delete_nodeint_at_index - deletes node from anywhere
 *@head: pointer to head pointer
 *@index: parameter
 *Return: del
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *anywhere = *head;
	listint_t *temp;
	unsigned int node;

	if (anywhere == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(anywhere);
		return (1);
	}
	node = 0;
	while (node < (index - 1))
	{
		if (anywhere->next == NULL)
			return (NULL);
		anywhere = anywhere->next;
		node++;
	}
	temp = anywhere->next;
	anywhere->next = temp->next;
	free(temp);
	return (1);
}
