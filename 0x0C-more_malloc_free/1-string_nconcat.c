#include "main.h"
/**
 *string_nconcat - a function that concatenates two strings
 *@s1: string destination
 *@s2: string source
 *@n: n byte to be concatenated
 *Return: allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len1 = 0;
	size_t len2 = 0;
	size_t totlen = 0;
	char *reslt = NULL;
	size_t i;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
		{
			len1++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
		{
			len2++;
		}
	}
	if (n < len2)
	{
		totlen = len1 + n;
	}
	else
	{
		totlen = len1 + len2;
	}
	reslt = (char *)malloc(totlen + 1);
	if (reslt == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		reslt[i] = s1[i];
	}
	for (i = 0; i < n && s2[i] != '\0'; i++)
	{ reslt[len1 + i] = s2[i];
	}	reslt[totlen] = '\0';
		return (reslt);
}
