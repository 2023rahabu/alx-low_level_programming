#include "lists.h"
/**
 *print_list -  a function that prints all the elements of a list_t list
 *@h: node
 *Return: string and count
 */

size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
