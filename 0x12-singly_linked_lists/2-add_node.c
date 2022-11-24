#include "lists.h"
/**
 *add_node - adds node to beginning of link
 *@head: pointer to a pointer to first data in the linked list
 *@str: parameter
 *Return: i
 */
list_t *add_node(list_t **head, const char *str)
{
	char *cpy;
	unsigned int length;
	struct list_s *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	cpy = strdup(str);
	if (cpy == NULL)
		return (NULL);
	for (length = 0; str[length] != '\0'; length++)
		;
	temp->str = cpy;
	temp->len = length;
	temp->next = *head;
	*head = temp;

	return (temp);
}


