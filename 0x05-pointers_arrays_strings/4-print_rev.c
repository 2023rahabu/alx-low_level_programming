#include "main.h"
/**
 * _puts - prints string
 *@str: parameter
 * Return: 0 success
 */
void _puts(char *str)
{
	int i;
	int j;
	int lenght;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	lenght = i;
	for (j = lenght - 1; j >= 0; j--)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
