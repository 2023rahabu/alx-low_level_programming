#include "lists.h"
/**
 *add_nodeint - adds a new node at the beginning
 *@head: pointer to a pointer to head of list
 *@n: integer value to strore into a new node
 *Return: address of newpointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *beginnew_node;

	beginnew_node = malloc(sizeof(listint_t));

	if (beginnew_node == NULL)
	{
		return (NULL);
	}

	beginnew_node->n = n;

	beginnew_node->next = *head;

	*head = beginnew_node;

	return (beginnew_node);

}
