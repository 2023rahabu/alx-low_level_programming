#include "main.h"
/**
 * _print_rev_recursion - function that prints a sring in reverse
 * @s: string parameter
 * Return: string in reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
