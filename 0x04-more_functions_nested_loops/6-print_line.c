#include "main.h"
/**
 * print_line - printing a straight line
 * @n: a parameter
 * Return : 0 success
 */
void print_line(int n)
{
	int i;

		for (i = 0; i < n; i++)
		{
			_putchar('-');
		}
		_putchar('\n');
}
