#include "main.h"
/**
 *_strdup -  function that returns a pointer to a new memory
 *@str: parameter string
 *Return: 0success
 */
char *_strdup(char *str)
{
	int i;
	int length;
	char *copy_str;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		length++;
	copy_str = malloc(length + 1 * sizeof(char));
	if (copy_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
		copy_str[i] = str[i];
	copy_str[i] = '\0';
	return (copy_str);
}
