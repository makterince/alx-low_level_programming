#include "lists.h"
/**
 *add_node_end - adds a node to the end of link
 *@head: pointer to pointer to head
 *@str: string parameter
 *Return: head
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *cpy;
	list_t *new_node, *current;
	int length;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	cpy = strdup(str);
	if (str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	for (length = 0; str[length] != '\0'; length++)
		;

	new_node->str = cpy;
	new_node->len = length;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	return (*head);
}
