#include "main.h"
/**
 * print_line - printing a straight line
 * @n: a parameter
 * Return : 0 success
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('-');
		}
		_putchar('\n');
	}
}
