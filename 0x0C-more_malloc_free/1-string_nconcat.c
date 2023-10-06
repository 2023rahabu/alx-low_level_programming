#include "main.h"
/**
 *string_nconcat - a function that concatenates two strings
 *@s1: string destination
 *@s2: string source
 *@n: n byte to be concatenated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len1 = 0;
	size_t len2 = 0;
	size_t total_len = 0;
	char *result = NULL;
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
		total_len = len1 + n;
	}
	else
	{
		total_len = len1 + len2;
	}
	result = (char *)malloc(total_len + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}
	for (i = 0; i < n && s2[i] != '\0'; i++)
	{
		result[len1 + i] = s2[i];
	}
	result[total_len] = '\0';
	return (result);
}
