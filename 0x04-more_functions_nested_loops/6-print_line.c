#include "main.h"
/**
 * print_line - printing straight line
 * @n: parameter
 * Return: 0 success
 */
void print_line(int n)
{
	int c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c < n; c++)
		{
			_putchar('_');
		}
	_putchar('\n');
	}
}
