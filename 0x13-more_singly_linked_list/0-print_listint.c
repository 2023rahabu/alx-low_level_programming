#include "lists.h"
/**
 *print_listint - function that prints all the elements of list.
 *@h:a node
 *Return: elements of a node
 */
size_t print_listint(const listint_t *h)
{

	const listint_t *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	return (count);
}
