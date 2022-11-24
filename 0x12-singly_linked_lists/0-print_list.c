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

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
		{
			printf("(nil");
			h = h->next;
		}
		else if (h->len == 0)
		{
			printf("[0]");
			h = h->next;
		}
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}