#include "main.h"
/**
 * _strlen - string lenght
 * @s: string parameter
 * Return: 0success
 */
int _strlen(char *s)
{
	int len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
