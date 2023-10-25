#include "lists.h"
/**
 *get_nodeint_at_index - function that returns the nth node
 *@head: node
 *@index: index of node
 *Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	listint_t *temp = head;
	unsigned int postion = 0;

	while (temp != NULL)
	{
		if (postion == index)
			return (temp);

		postion++;
		temp = temp->next;
	}
	return (NULL);
}
