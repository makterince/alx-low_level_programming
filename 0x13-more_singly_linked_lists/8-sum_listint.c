#include "lists.h"
/**
 *sum_listint - sums up all the data in the link
 *@head: head pointer
 *Return: sum
 *
 */
int sum_listint(listint_t *head)
{
	listint_t *sumint = head;
	unsigned int sum;

	sum = 0;
	while (sumint != NULL)
	{
		sum += sumint->n;
		sumint = sumint->next;
	}
	return (sum);
}
