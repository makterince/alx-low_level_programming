#include "lists.h"
/**
 *print_list - prints all elements of a list_t
 *@h: parameter
 *Return: 0
 *
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
