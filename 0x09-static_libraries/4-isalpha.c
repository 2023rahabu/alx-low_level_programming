#include "main.h"
/**
 * _isalpha - check for lower case in a character
 * @c: parameter to be checked
 * Return: 1 for success and 0 for non lowercase
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
			(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
