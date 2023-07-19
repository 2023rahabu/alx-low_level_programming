#include "main.h"
/**
 * print_last_digit - printing last digit
 * @num: parameter
 * Return: 0 success
 */
int print_last_digit(int num)
{
	int digit = num % 10;

	if (digit < 0)
		digit *= -1;
	_putchar(digit + '0');
	return (digit);
}
