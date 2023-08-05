#include "main.h"
/**
 * _isdigit - check for lower case in a character
 * @c: parameter to be checked
 * Return: 1 for success and 0 for non lowercase
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
