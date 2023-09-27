#include "main.h"
/**
 *_strlen_recursion - printing string lenght
 *@s:parameter
 *Return: 0
 */
int _strlen_recursion(char *s)
{
	int i;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		i = _strlen_recursion(s + 1);
	}
	return (1 + i);
}
