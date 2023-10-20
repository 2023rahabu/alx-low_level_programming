#include "lists.h"
/**
 *add_node_end - add node at the beginning
 *@str: parameter string
 *@head: node head
 *Return: address of newnode
 */
list_t *add_node_end(list_t **head, const char *str)
{

	list_t *addnewendNode = (list_t *)malloc(sizeof(list_t));
	list_t *temp;

	if (addnewendNode == NULL)
	{
		return (NULL);
	}
	else
	{
		addnewendNode->str = strdup(str);
		addnewendNode->len = strlen(str);
		addnewendNode->next = NULL;
		/*Update the head to point to the newly created node*/
		if (*head == NULL)
		{
			*head = addnewendNode;
		}
		else
			temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = addnewendNode;
	}
	return (addnewendNode);

}
