#include "main.h"
/**
  a*_calloc - a function that allocates memory for an array
 *@nmemb: number of blocks
 *@size: datatype
 *Return: allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ptr_calloc;

	if (nmemb && size == 0)
	{
		return (NULL);
	}

	ptr_calloc = malloc(nmemb * size);

	if (ptr_calloc == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
		*((char *)ptr_calloc + i) = 0;

	return (ptr_calloc);
}
