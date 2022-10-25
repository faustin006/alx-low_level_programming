#include "lists.h"

/**
 * reverse_listint - reverses a listint_t
 * @head: pointer to the head address
 *
 * Return: Pointer to the first reversed node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *head, *behind;

	if (head == NULL || *head == NULL)
		return(NULL);

	behind = NULL;

	while ((*head)->next != NULL)
	{
		head = (*head)->next;
		(*head)->next = behind;
		behind = *head;
		*head = head;
	}

	(*head)->next = behind;

	return (*head);
}
