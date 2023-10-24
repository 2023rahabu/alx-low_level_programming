#include "lists.h"
/**
 *free_listint2 - function that frees a list
 *@head: head node
 *Return: void
 */
void free_listint2(listint_t **head)
{

	listint_t *available_node;

	if (head == NULL || **head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		/*take available node and strore it to head*/
		available_node = *head;
		/*move to next node*/
		*head = (*head)->next;
		/*free current node*/
		free(available_node);
	}
	*head = NULL;
}
