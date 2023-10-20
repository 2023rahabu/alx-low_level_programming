#include "lists.h"
/**
 *add_node - add node at the beginning
 *@str: parameter string
 *@head: node head
 *Return: address of newnode
 */
list_t *add_node(list_t **head, const char *str)
{

	list_t *addnewNode = (list_t *)malloc(sizeof(list_t));

	if (addnewNode == NULL)
	{
		return (NULL);
	}
	else
	{
		addnewNode->str = strdup(str);
		addnewNode->len = strlen(str);
		addnewNode->next = (*head);
/*Update the head to point to the newly created node*/
		*head = addnewNode;
	}
	return (addnewNode);

}
