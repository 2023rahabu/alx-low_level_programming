#include "main.h"
/**
 * _memcpy - function that copies memory are
 * @dest: parameter destination
 * @src: source of memory to be copied
 * @n: maximum byte to be copied
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
	src[i] = dest[i];
	src++;
	i++;
	}
	return (dest);
}
