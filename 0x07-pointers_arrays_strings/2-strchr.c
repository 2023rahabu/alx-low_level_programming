#include "main.h"
/**
 * _strchr - function that locate a character in a string
 * @s: string
 * @c: occurance character
 * Return: pointer to the first occurance
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s); /* Return the address of the first occurrence of c */
		}
		s++; /* Move to the next character in the string */
	}
	return (NULL); /* If the character c is not found, return NULL */
}
