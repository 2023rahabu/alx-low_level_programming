#include "main.h"
/**
 * print_diagonal - printing diagonal
 * @n: parameter n
 * Return: 0 success
 */

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');

}
