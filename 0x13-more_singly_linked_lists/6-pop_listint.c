#include "lists.h"

/**
 * pop_listint - deletes tje head of a listint_t lit
 * @head: pointer to the head address
 *
 * Return: data of the head node
 * 	Or if linked list is empty 0
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
