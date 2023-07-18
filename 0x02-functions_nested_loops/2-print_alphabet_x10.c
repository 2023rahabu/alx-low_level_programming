#include<stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 * Return: 0 success
 */
void print_alphabet_x10(void)
{
	char a;
	int count = 0;

	while (count < 10)
	{
		for (a = 97; a <= 122; a++)
		{
			putchar(a);
		}
		count++;
		putchar('\n');
	}
}
