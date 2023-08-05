#include "main.h"
/**
 * _isupper - check for lower case in a character
 * @c: parameter to be checked
 * Return: 1 for success and 0 for non lowercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
