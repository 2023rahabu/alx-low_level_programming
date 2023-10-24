#include "lists.h"
/**
 *add_nodeint_end - adds a new node at the beginning
 *@head: pointer to a pointer to head of list
 *@n: integer value to strore into a new node
 *Return: address of newpointer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endnew_node;
listint_t *temp;

	endnew_node = malloc(sizeof(listint_t));

	if (endnew_node == NULL)
	{
		return (NULL);
	}

	endnew_node->n = n;
/*point new node to the current node*/
	endnew_node->next = NULL; /*cze it's the last node*/

/*found list empty?*/
if (*head == NULL)
{
*head = endnew_node;
}
else
{
/*traverse list*/
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = endnew_node;
}

return (endnew_node);
}
