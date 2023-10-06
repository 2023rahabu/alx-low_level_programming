#include "main.h"
/**
 *malloc_checked - function that allocate memory
 *@b: parameter
 *Return: void pointer to allocated mem
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
