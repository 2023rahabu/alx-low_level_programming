#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 *list_len -  a function that prints all the elements of a list_t list
 *@h: node
 *Return: string and count
 */

size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
