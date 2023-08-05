#include "main.h"
/**
 * _strstr - a function that locates a substring
 * @haystack: string searched
 * @needle: substring to be found
 * Return: pointer to first occurence
 */
char *_strstr(char *haystack, char *needle)
{
	char *s_h, *f1_n;

	while (*haystack != '\0')
	{
		s_h = haystack;
		f1_n = needle;

		while (*haystack != '\0' && *f1_n != '\0' && *haystack == *f_n)
		{
			haystack++;
			f1_n++;
		}

		if (*f1_n == '\0') /* Entire substring found */
		{
			return (s_h);
		}

		/* Not a match, reset to the next character in haystack */
		haystack = s_h + 1;
	}

	return (NULL); /* If substring not found in haystack, return NULL */
}
