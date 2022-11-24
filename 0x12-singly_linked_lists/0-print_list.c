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
	char *strt;
	unsigned int j;
	
	j = h->len;
	strt = h->str;
	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
		{
			j = 0;
			strt = "(nil)";
		}
		printf("[%d] %s\n", j, strt);
		h = h->next;
	}
	return (i);
}
