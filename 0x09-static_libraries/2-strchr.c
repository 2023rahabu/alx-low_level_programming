#include "main.h"
/**
 * _strchr - function that locate a character in a string
 * @s: string
 * @c: occurance character
 * Return: pointer to the first occurance
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)

			return (s + i); /* Return the address of the first occurrence of c */
	}
	if (s[i] == c)
		return (s + i);
	return (0);/* If the character c is not found, return NULL */
}
