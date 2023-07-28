#include "main.h"
/**
* _strcmp - compares two string
* @s1: left string
* @s2: right string
* Return: 0 if string match 1 s1 greater than s2 -1 s1 less than s2
*/
int _strcmp(char *s1, char *s2)
{
	int i, j;

	j = 0;
	i = 0;
/*loop to check if current character in s1 and s2 is not the null*/
/*in loop compare if s1 and s2 character are different*/

	while (s1[i] != '\0' && s2[j] != '\0')
	{
/*if character are different one character greater than other using ASCII*/
		if (s1[i] != s2[j])
		{
			/*function return substraction of s1[i] - s2[j]*/
			return (s1[i] - s2[j]);
		}
/*if character are the same the loop continue to the next index */
		i++;
		j++;
	}
/** if strings equal up to the null terminator it return 0*/
	return (0);
}
