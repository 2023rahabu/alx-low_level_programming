#include "lists.h"
/**
 * listint_len - function that print elements
 * @h: node
 * Return: elements and list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
