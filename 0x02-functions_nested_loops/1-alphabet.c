#include<stdio.h>
#include "main.h"
/**
 * print_alphabet - printing alphabet in lower case
 * Return:0 success
 */
void print_alphabet(void)
{
	char a;
		for (a = 97; a <= 122; a++)
		{
			putchar(a);
		}
		putchar('\n');
}
