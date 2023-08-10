#include "main.h"
#include <stdio.h>
/**
 * _calloc - function that allocates memory for any array
 * @nmemb: unsigned int type
 * @size: unsigned integer type
 * Return: 0 success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int count;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	count = 0;
	while (count < nmemb * size)
	{
		ptr[count] = 0;
		count++;
	}
	return (ptr);
}
