#include "main.h"
/**
 * string_toupper - function that change all lower case letter to upper
 * @str: string parameter
 * Return: 0 succeess
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
