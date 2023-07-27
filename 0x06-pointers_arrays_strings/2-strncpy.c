#include "main.h"
/**
 * _strncpy - function that copy two string
 * @dest: string destination
 * @src: string source
 * @n: check character maximum
 * Return: 0 success
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
