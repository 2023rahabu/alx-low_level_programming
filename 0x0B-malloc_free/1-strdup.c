#include "main.h"
/**
 * _strdup - function that returns a pointer to newly allocated memory
 * @str: character string
 * Return: Null if str is null
 */
char *_strdup(char *str)
{
	char *ptStr;
	int count;
	int str_len;

	str_len = count = 0;

	while (str[str_len] != '\0')
	{
		str_len++;
	}
	ptStr = malloc((str_len * sizeof(char)) + 1);

	if (ptStr == NULL)
	{
		return (NULL);
	}

	for (count = 0; str[count] != '\0'; count++)
	{
		ptStr[count] = str[count];
	}
	ptStr[count] = '\0';
	return (ptStr);
}
