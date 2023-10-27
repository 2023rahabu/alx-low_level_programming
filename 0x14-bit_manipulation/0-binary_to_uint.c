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
	unsigned int i = 0;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		result <<= 1;

		if (b[i] & 1)
			result += 1;
		i += 1;
	}
	return (result);
}
