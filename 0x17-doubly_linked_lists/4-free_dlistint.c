#include "lists.h"
#include <stdlib.h>


/**
 * free_dlistint - frees a doubly linked list
 * @head: double pointer to head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
