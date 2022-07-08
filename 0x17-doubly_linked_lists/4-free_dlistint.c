#include "lists.h"

/**
 * free_dlistint - frees list
 * @head: head of node
 * Return: free'd list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *remnant;

	while (head)
	{
		remnant = head;
		head = remnant->next;
		free(remnant);
	}
}
