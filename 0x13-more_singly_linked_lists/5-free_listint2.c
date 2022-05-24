#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *tmp2;

	tmp2 = *head;
	while (tmp2 != NULL && head != NULL)
	{
		tmp = tmp2;
		tmp2 = tmp2->next;
		free(tmp);
	}
	*head = NULL;
}
