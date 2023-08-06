#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - entry point
 * @argc: arguments passed
 * @argv: argument vector
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int result;
	int i;
	int j;


	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	result = i * j;
	printf("%d\n", result);
	return (0);
}
