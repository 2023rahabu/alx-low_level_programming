#include "main.h"
/**
 * _strspn - function that gets the lenght of a prefix substring
 * @s: string
 * @accept: a second string
 * Return: count
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count, i;

	i = 0;

	while (s[i] != '\0')
	{
		count = 0;

		while (accept[count] != '\0' && s[i] != accept[count])
			count++;
		if (accept[count] == '\0')
			return (i);
		i++;
	}

	return (i);
}
