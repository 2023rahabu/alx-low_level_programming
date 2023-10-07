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
	char *concat_str;
	unsigned int i;
	unsigned int j;
	unsigned int len1;

	len1 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	/** i calculae length of s1 */
	for (i = 0; s1[i] != '\0'; i++)
	{
		len1++;
	}

	/** allocate memory*/
	concat_str = malloc(len1 + n + 1);

	if (concat_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		concat_str[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		concat_str[i + j] = s2[j];
	}
	concat_str[i + j] = '\0';
	return (concat_str);
}
