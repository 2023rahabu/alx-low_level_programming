#include "main.h"
/**
 * _islower - check for lower case in a character
 * @c: parameter to be checked
 * Return: 1 for success and 0 for non lowercase
 */
int _islower(int c)
{
        if (c >= 'a' && c <= 'z')
        {
                return (1);
        }
        else
        {
                return (0);
        }
}
