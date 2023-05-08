#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all data in the list
 *
 * @head: the header of the list
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
