#include "lists.h"
/**
 *sum_listint - function that summ all data
 *@head: node
 *Return: sum node
 */
int sum_listint(listint_t *head)
{

	listint_t *temp = head;
	unsigned int sum = 0;

	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
