#include "lists.h"
/**
 *pop_listint - function that deletes the head node
 *@head:parameter node
 *Return: data nodes
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *new_head;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		new_head = *head;
		data = (*head)->n;

		*head = (*head)->next;

		free(new_head);

		return (data);
	}
}

