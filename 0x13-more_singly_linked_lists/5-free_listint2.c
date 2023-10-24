#include "lists.h"
/**
 *free_listint2 - function that frees a list
 *@head: head node
 *Return: void
 */
void free_listint2(listint_t **head)
{

	listint_t *available_node;
	listint_t *temp = *head;

		if (head == NULL || *head == NULL)
		{
			return;
		}

	while (temp != NULL)
	{
		/*take available node and strore it to head*/
		available_node = temp->next;
		/*move to next node*/
		free(available_node);
		temp = available_node;

	}
	*head = NULL;
}
