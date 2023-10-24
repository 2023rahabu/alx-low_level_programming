#include "lists.h"
/**
 * print_listint - function that print elements
 * @h: node
 * Return: elements and list
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
