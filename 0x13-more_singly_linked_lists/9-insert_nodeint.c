#include "lists.h"
/**
 *insert_nodeint_at_index - inserts node anywhere i stipulates
 *@head: pointer to head pointer
 *@idx: parameter
 *@n: parameter
 *Return: node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *anywhere;
	listint_t *drop = *head;
	unsigned int i;

	anywhere = malloc(sizeof(listint_t));
	if (anywhere == NULL)
		return (NULL);
	anywhere->n = n;

	if (idx == 0)
	{
		anywhere->next = drop;
		*head = anywhere;
		return (anywhere);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if (drop == NULL || drop->next == NULL)
			return (NULL);
		drop = drop->next;
	}
	anywhere->next = drop->next;
	drop->next = anywhere;
	return (anywhere);
}
