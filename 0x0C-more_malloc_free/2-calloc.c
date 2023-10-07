#include "main.h"
/**
 a*_calloc - a function that allocates memory for an array
 *@nmemb: number of blocks
 *@size: datatype
 *Return: allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{

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

	return (ptr_calloc);
}
