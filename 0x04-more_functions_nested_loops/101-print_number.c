#include "main.h"
/**
 * print_number - prints an integer
 * @n: parameter
 * Return: 0 success
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar(45);
		i = -i;
	}
	if (i / 10 != 0)
	{
		print_number(i / 10);
		}
	_putchar('0' + i % 10);
}
