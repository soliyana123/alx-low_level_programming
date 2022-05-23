#include "stdlib.h"
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 * Return: the sum of all data 
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *temp;

	if (head == NULL)
		return (0);
	sum = 0;
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
