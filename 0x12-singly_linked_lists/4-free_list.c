#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: head
 */
void free_list(list_t *head)
{
	list_t *temp = head, *previousNode;

	while (temp != NULL)
	{
		previousNode = temp;
		temp = temp->next;
		free(previousNode->str);
		free(previousNode);
	}
}
