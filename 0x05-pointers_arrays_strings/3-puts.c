#include "main.h"
/**
 * _puts - prints string
 *@str: parameter
 * Return: 0 success
 */
void _puts(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
		_putchar(str[i]);
	}
	_putchar('\n');
}
