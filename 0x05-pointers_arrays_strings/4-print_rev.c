#include "main.h"
/**
 * _puts - prints string
 *@str: parameter
 * Return: 0 success
 */
void print_rev(char *s)
{
	int i;
	int j;
	int lenght;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	lenght = i;
	for (j = lenght - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
