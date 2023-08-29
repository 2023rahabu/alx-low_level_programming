#include "main.h"
/**
 * print_triangle - function that prints a triangle
 * @size: parameter
 * Return: 0 success
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			_putchar(' ');
		}
		for (j = 0; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
