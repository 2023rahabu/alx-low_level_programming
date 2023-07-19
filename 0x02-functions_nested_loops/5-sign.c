#include "main.h"
/**
 * print_sign - function that print sign
 * @n: parameter
 * Return: 1 for greater than zero 0 for zero and -1 for less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
			return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
	_putchar('\n');
}



