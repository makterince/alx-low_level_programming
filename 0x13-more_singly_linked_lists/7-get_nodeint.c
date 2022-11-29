#include "lists.h"
/**
 *get_nodeint_at_index - gets node at nth node
 *@head: head pointer
 *@index: parameter for loop
 *Return: the nth node
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	count = 0;
	while (count < index)
	{
		if (head == NULL)
			return (NULL);
		count++;
		head = head->next;
	}
	return (head);
}
