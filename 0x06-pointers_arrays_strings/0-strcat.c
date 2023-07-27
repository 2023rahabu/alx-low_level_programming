#include "main.h"
/**
 * _strcat - function that concatenate two string
 * @dest: destination of a string
 * @src: source of a string
 * Return: 0 success
 */
char *_strcat(char *dest, char *src)
{
	char *ptr2 = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr2);
}
