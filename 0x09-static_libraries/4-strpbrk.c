#include "main.h"
/**
 * _strpbrk - function that search a string for any of bytes
 * @s: string
 * @accept:second string
 * Return: pointer to the first occurence
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *p = accept;

		while (*p != '\0')
		{
			if (*s == *p)
			{
				return (s); /* Return pointer to the first occurrence */
			}

			p++;
		}

		s++;
	}

	return (NULL); /* If no character from accept is found in s, return NULL */
}
