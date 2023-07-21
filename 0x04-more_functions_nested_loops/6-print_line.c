#include "main.h"
/**
 * print_line - printing straight line
 * @n: parameter
 * Return: 0 success
 */
void print_line(int n)
{
	int c;

	c = 0;
	while (c < n)
	{
		_putchar('-');

		c++;
	}
	_putchar('\n');
}
