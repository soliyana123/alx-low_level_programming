#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * reverse_listint - reverse a node
 * @head: node head
 * Description: Add a new node
 * Return: New node
 */
listint_t *reverse_listint(listint_t **head)
{
    listint_t *prev = NULL;
    listint_t *next = NULL;

    while (*head)
    {
        next = (*head)->next;
        (*head)->next = prev;
        prev = *head;
        *head = next;
    }

    *head = prev;

    return (*head);
}
