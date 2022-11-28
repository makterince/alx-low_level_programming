#include "lists.h"
/**
 *listint_len - returns number of element in a link
 *Return: temp address or null
 *@h: head
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}
	return (count);
}
