#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: count argument
 * @argv: character array of a string
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;

	if (argc == 1)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
