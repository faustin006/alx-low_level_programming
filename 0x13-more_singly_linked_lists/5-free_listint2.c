#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @h: pointer to the head address
 *
 * Description: sets the head to NULL
 */

void free_listint2(listint_t **h)
{
	listint_t *tmp;

	if (h == NULL)
		return;

	while (*h)
	{
		tmp = (*h)->next;
		free(*h);
		*h = tmp;
	}

	head = NULL;
}
