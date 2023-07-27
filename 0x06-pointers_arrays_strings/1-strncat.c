#include "main.h"
/**
 * _strncat - function that concatenate two string
 * @dest: destination of a string
 * @src: source of a string
 * @n: maximun character to be printed
 * Return: 0 success
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr2 = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (ptr2);
	}
