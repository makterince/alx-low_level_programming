#include "lists.h"
/**
 *list_len - lists the number of elements in a link
 *@h: pointer to first link
 *Return: i
 *
 */
size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}

