#include "main.h"
/**
 *_realloc - function that reallocates a memory block
 *@ptr: allocated meory
 *@old_size: old allocated memory
 *@new_size: new allocated memory
 *Return: new allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i;
	unsigned int n = new_size;
		char *oldp = ptr;

		if (ptr == NULL)
		{
			new_ptr = malloc(new_size);
			return (new_ptr);
		}
		else if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
		else if (new_size == old_size)
			return (ptr);
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	if (new_size > old_size)
		n = old_size;
	for (i = 0; i < n; i++)
		new_ptr[i] = oldp[i];
	free(ptr);
	return (new_ptr);
}
