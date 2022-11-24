#include "lists.h"
/**
 *print_list - prints all elements of a list_t
 *@h: parameter
 *Return: 0
 *
 */
size_t print_list(const list_t *h)
{
	size_t i;

	if (h->str == NULL)
	{
		printf("[0] (nil)");
		h = h->next;
	}
	for (i = 0; h != NULL; i++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
