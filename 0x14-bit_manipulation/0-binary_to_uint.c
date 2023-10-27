#include "main.h"
#include <string.h>
#include <stdarg.h>
/**
 *binary_to_uint - converting binary to decimal
 *@b:pointer to char
 *Return: decimal value
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	int slen = strlen(b);
	unsigned int total = 0;
	unsigned int dec = 1;

	if (b == NULL)
	{
		return (0);
	}

	for (i = (slen - 1); i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);  /* Return 0 for invalid characters*/
		if (b[i] == '1')
		{
			total = total + dec;
		}
		dec = dec * 2;
	}
	return (total);
}
