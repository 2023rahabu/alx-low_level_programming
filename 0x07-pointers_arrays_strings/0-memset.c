#include "main.h"
/**
 * _memset - function that fills memory with a constnt byte
 * @s: a string to be filled
 * @b: a constant parameter that will be filled in the string
 * @n: maximum number of character of constant be to be filled
 * Return: 0 success
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		while (i < n)
		{
			s[i] = b;
		}
	i++;
	}
	return (s);
}
