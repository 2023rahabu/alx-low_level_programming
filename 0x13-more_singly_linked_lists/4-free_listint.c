#include "lists.h"
/**
 *free_listint - function that frees a list
 *@head: head node
 *Return: void
 */
void free_listint(listint_t *head)
{

	listint_t *available_node;

	while (head != NULL)
	{
		/*take available node and strore it to head*/
		available_node = head;
		/*move to next node*/
		head = head->next;
		/*free current node*/
		free(available_node);
	}
}
