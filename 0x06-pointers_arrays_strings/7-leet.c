#include "main.h"
/**
 * leet - function that encodes string
 * @str: parameter
 * Return: 0 success
 */
char *leet(char *str)
{
	char leetChars[] = "aAeEoOtTlL";
	char leetReplacements[] = "4433007711";
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leetChars[j] != '\0'; j++)
		{
			if (str[i] == leetChars[j])
			{
				str[i] = leetReplacements[j];
				break;
			}
		}
	}
	return (str);
}
